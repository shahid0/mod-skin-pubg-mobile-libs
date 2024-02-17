#include <list>
#include <vector>
#include <string>
#include <pthread.h>
#include <thread>
#include <cstring>
#include <jni.h>
#include <unistd.h>
#include <fstream>
#include <iostream>
#include <dlfcn.h>
#include "Includes/Logger.h"
#include "Android_JNI/android_native_app_glue.h"
#include "Includes/Utils.h"
#include "KittyMemory/MemoryPatch.h"
#include "Substrate/SubstrateHook.h"
#include <fcntl.h>
#include <sys/stat.h>
#define LibUE4 "libUE4.so"
#include "Includes/Macros.h"
#include <semaphore.h>
#include <stdint.h>
#include <sstream>
#include <stdarg.h>
#include <stdio.h>
#include "Tools.h"
#include <curl/curl.h>
#include <openssl/rsa.h>
#include <openssl/pem.h>
#include "SDK_Offset/Offset.h"
#include "SDK_Offset/SDK.hpp"
#include "json.hpp"

using namespace SDK;
android_app * g_app = 0;

using namespace KittyMemory;
bool WriteAddress(void * addr, void * buffer, size_t length) {
  unsigned long page_size = sysconf(_SC_PAGESIZE);
  unsigned long size = page_size * sizeof(uintptr_t);
  return mprotect((void * )((uintptr_t) addr - ((uintptr_t) addr % page_size) - page_size), (size_t) size, PROT_EXEC | PROT_READ | PROT_WRITE) == 0 && memcpy(addr, buffer, length) != 0;
}

template < typename T >
  void WriteM(uintptr_t addr, T value) {
    WriteAddress((void * ) addr, & value, sizeof(T));
  }

int detectLobby = 0;
int detectGame = 0;
typedef unsigned long DDWORD;

typedef unsigned char BYTE; // 8-bit unsigned entity.
typedef BYTE * PBYTE; // Pointer to BYTE.

uintptr_t anort;

DWORD libUE4Base = 0;

DWORD OriginalStackCheck = 0;

const void * subbase = 0;
int subxbase = 0;
int destination = 0;

bool checkFileForPlugin() {
  std::ifstream file("/proc/self/cmdline");
  if (file.is_open()) {
    std::string line;
    while (std::getline(file, line)) {
      if (line.find(":plugin") != std::string::npos) {
        file.close();
        kill(getpid(), SIGSTOP);
        pthread_exit(NULL);
        return true;
      }
    }
    file.close();
  }
  return false;
}

const char * GetPKG() {
  FILE * f = fopen("/proc/self/cmdline", "rb");
  if (f) {
    char * buf = new char[64];
    fread(buf, sizeof(char), 64, f);
    fclose(f);
    return buf;
  }
  return 0;
}

struct snew_Skin {
  int XSuits = 403003;
  int XSuits1 = 40604002;
  int Balo1 = 501001;
  int Balo2 = 501002;
  int Balo3 = 501003;
  int Balo4 = 501004;
  int Balo5 = 501005;
  int Balo6 = 501006;
  int Helmet1 = 502001;
  int Helmet2 = 502002;
  int Helmet3 = 502003;
  int Helmet4 = 502004;
  int Helmet5 = 502005;

  int Helmet6 = 502114;
  int Helmet7 = 502115;
  int Helmet8 = 502116;
  int Parachute = 703001;

  int AKM = 10100100;
  int AKM_Mag = 29100100;
  int M16A4 = 10100200;
  int M16A4_Stock = 20500700;
  int M16A4_Mag = 29100200;
  int Scar = 10100300;
  int Scar_Mag = 29100300;
  int Pan = 108004;

  int M416_1 = 10100400;
  int M416_2 = 29100400;
  int M416_3 = 20300800;
  int M416_4 = 20500500;
  int M416_flash = 201010;
  int M416_compe = 201009;
  int M416_silent = 201011;
  int M416_reddot = 203001;
  int M416_holo = 203001;
  int M416_x2 = 203003;
  int M416_x3 = 203014;
  int M416_x4 = 203004;
  int M416_x6 = 203015;
  int M416_quickMag = 204012;
  int M416_extendedMag = 204011;
  int M416_quickNextended = 204013;
  int M416_stock = 205002;
  int M416_verical = 203015;
  int M416_angle = 202001;
  int M416_lightgrip = 202004;
  int M416_pink = 202005;
  int M416_lazer = 202007;
  int M416_thumb = 202006;

  int Groza = 10100500;
  int QBZ = 10100700;
  int AUG = 10100600;
  int M762 = 10100800;
  int M762_Mag = 29100800;
  int ACE32 = 10110200;
  int Honey = 10101200;
  int UZI = 10200100;
  int UMP = 10200200;
  int Vector = 10200300;
  int Thompson = 10200400;
  int Bizon = 10200500;
  int K98 = 10300100;
  int M24 = 10300200;
  int AWM = 10300300;
  int AMR = 10301200;
  int VSS = 10300500;
  int SKS = 10300400;
  int Mini14 = 10300600;
  int MK14 = 10300700;
  int SLR = 10300900;
  int S1897 = 10400200;
  int DP28 = 10500200;
  int M249 = 10500100;
  int MG3 = 10501000;
  int Skorpion = 10600800;
  int Moto = 1901001;
  int CoupeRP = 1961001;
  int Dacia = 1903001;
  int UAZ = 1908001;
};

inline snew_Skin new_Skin;

int( * osub_E2172)(const char * a1, unsigned int a2);
int hsub_E2172(const char * a1, unsigned int a2) {

  while (true) {

    sleep(99999);
  }

  return osub_E2172(a1, a2);
}

struct sModSkin {
  bool Enable = 1;
  bool HitEffect = 0;
  bool KillMessage = 0;
  bool DeadBox = 0;
  int XSuits = 1;
  int Balo = 1;
  int AKM = 1;
  int M16A4 = 1;
  int Scar = 1;
  int M416 = 1;
  int Groza = 1;
  int AUG = 1;
  int QBZ = 1;
  int M762 = 1;
  int ACE32 = 1;
  int Helmet1 = 1;
  int Helmet2 = 1;
  int Helmet3 = 1;
  int Parachute = 1;
  int Honey = 1;
  int UZI = 1;
  int UMP = 1;
  int Vector = 1;
  int Thompson = 1;
  int Bizon = 1;
  int K98 = 1;
  int M24 = 1;
  int AWM = 1;
  int AMR = 1;
  int VSS = 1;
  int SKS = 1;
  int Mini14 = 1;
  int MK14 = 1;
  int SLR = 1;
  int S1897 = 1;
  int DP28 = 1;
  int M249 = 1;
  int MG3 = 1;
  int Skorpion = 1;
  int Pan = 1;
  int Moto = 1;
  int CoupeRP = 1;
  int UAZ = 1;
  int Dacia = 1;
};

inline sModSkin ModSkin;

void * readfileSkin(void * ) {
  sleep(3);
  while (true) {
    sleep(1);
    std::string filePath = "data/share1/ModSkin.ini";

    // Open the file
    std::ifstream inputFile(filePath);

    // Check if the file opened successfully
    if (!inputFile.is_open()) {
      LOGI("Cannot open file");
    }

    // Create a map to store values
    std::map < std::string, int > configValues;

    // Read each line from the file
    std::string line;
    while (std::getline(inputFile, line)) {
      // Use stringstream to parse the stream into key-value pairs
      std::stringstream ss(line);
      std::string key;
      char colon;
      int value;

      // Read key
      if (ss >> std::quoted(key) >> colon >> value) {
        // Store to map
        configValues[key] = value;
      } else {
        LOGI("Format error at line: %d", line.c_str());
      }
    }

    inputFile.close();

    for (const auto & pair: configValues) {
      std::cout << pair.first << " : " << pair.second << std::endl;

      /// start outfit skins /////
      if (pair.first == "HelmetV1") {
        ModSkin.Helmet1 = pair.second;
      }
      if (pair.first == "HelmetV2") {
        ModSkin.Helmet2 = pair.second;
      }
      if (pair.first == "HelmetV3") {
        ModSkin.Helmet3 = pair.second;
      }
      if (pair.first == "Parachute") {
        ModSkin.Parachute = pair.second;
      }
      ///end out fit skins////

      if (pair.first == "Active")
        ModSkin.Enable = pair.second;
      if (pair.first == "HitEffect")
        ModSkin.HitEffect = pair.second;
      if (pair.first == "KillMessage")
        ModSkin.KillMessage = pair.second;
      if (pair.first == "DeadBox")
        ModSkin.DeadBox = pair.second;
      if (pair.first == "Xsuits")
        ModSkin.XSuits = pair.second;
      if (pair.first == "Balo")
        ModSkin.Balo = pair.second;
      if (pair.first == "AKM")
        ModSkin.AKM = pair.second;
      if (pair.first == "M16A4")
        ModSkin.M16A4 = pair.second;
      if (pair.first == "Scar")
        ModSkin.Scar = pair.second;
      if (pair.first == "M416")
        ModSkin.M416 = pair.second;
      if (pair.first == "Groza")
        ModSkin.Groza = pair.second;
      if (pair.first == "AUG")
        ModSkin.AUG = pair.second;
      if (pair.first == "QBZ")
        ModSkin.QBZ = pair.second;
      if (pair.first == "M762")
        ModSkin.M762 = pair.second;
      if (pair.first == "ACE32")
        ModSkin.ACE32 = pair.second;
      if (pair.first == "Honey")
        ModSkin.Honey = pair.second;
      if (pair.first == "UZI")
        ModSkin.UZI = pair.second;
      if (pair.first == "UMP")
        ModSkin.UMP = pair.second;
      if (pair.first == "Vector")
        ModSkin.Vector = pair.second;
      if (pair.first == "Thompson")
        ModSkin.Thompson = pair.second;
      if (pair.first == "Bizon")
        ModSkin.Bizon = pair.second;
      if (pair.first == "K98")
        ModSkin.K98 = pair.second;
      if (pair.first == "M24")
        ModSkin.M24 = pair.second;
      if (pair.first == "AWM")
        ModSkin.AWM = pair.second;
      if (pair.first == "AMR")
        ModSkin.AMR = pair.second;
      if (pair.first == "VSS")
        ModSkin.VSS = pair.second;
      if (pair.first == "SKS")
        ModSkin.SKS = pair.second;
      if (pair.first == "Mini14")
        ModSkin.Mini14 = pair.second;
      if (pair.first == "MK14")
        ModSkin.MK14 = pair.second;
      if (pair.first == "SLR")
        ModSkin.SLR = pair.second;
      if (pair.first == "S1897")
        ModSkin.S1897 = pair.second;
      if (pair.first == "DP28")
        ModSkin.DP28 = pair.second;
      if (pair.first == "M249")
        ModSkin.M249 = pair.second;
      if (pair.first == "MG3")
        ModSkin.MG3 = pair.second;
      if (pair.first == "Skorpion")
        ModSkin.Skorpion = pair.second;
      if (pair.first == "Pan")
        ModSkin.Pan = pair.second;
      if (pair.first == "Parachute")
        ModSkin.Parachute = pair.second;

      if (pair.first == "Moto")
        ModSkin.Moto = pair.second;
      if (pair.first == "Moto_ID") {
        new_Skin.Moto = pair.second;
        if (new_Skin.Moto > 1901001)
          ModSkin.Moto = 99;
      }

      if (pair.first == "CoupeRP")
        ModSkin.CoupeRP = pair.second;
      if (pair.first == "CoupeRP_ID") {
        new_Skin.CoupeRP = pair.second;
        if (new_Skin.CoupeRP > 1961001)
          ModSkin.CoupeRP = 99;
      }

      if (pair.first == "UAZ")
        ModSkin.UAZ = pair.second;
      if (pair.first == "UAZ_ID") {
        new_Skin.UAZ = pair.second;
        if (new_Skin.UAZ > 1908001)
          ModSkin.UAZ = 99;
      }

      if (pair.first == "Dacia")
        ModSkin.Dacia = pair.second;
      if (pair.first == "Dacia_ID") {
        new_Skin.Dacia = pair.second;
        if (new_Skin.Dacia > 1903001)
          ModSkin.Dacia = 99;
      }
    }
    LOGI("M416: %d", ModSkin.M416);

  }
}

struct sRegion {
  uintptr_t start, end;
};

std::vector < sRegion > trapRegions;

bool isObjectInvalid(UObject * obj) {
  if (!Tools::IsPtrValid(obj)) {
    return true;
  }

  if (!Tools::IsPtrValid(obj -> ClassPrivate)) {
    return true;
  }

  if (obj -> InternalIndex <= 0) {
    return true;
  }

  if (obj -> NamePrivate.ComparisonIndex <= 0) {
    return true;
  }

  if ((uintptr_t)(obj) % sizeof(uintptr_t) != 0x0 &&
    (uintptr_t)(obj) % sizeof(uintptr_t) != 0x4) {
    return true;
  }

  if (std::any_of(trapRegions.begin(), trapRegions.end(), [obj](sRegion region) {
      return ((uintptr_t) obj) >= region.start && ((uintptr_t) obj) <= region.end;
    }) || std::any_of(trapRegions.begin(), trapRegions.end(), [obj](sRegion region) {
      return ((uintptr_t) obj -> ClassPrivate) >= region.start &&
        ((uintptr_t) obj -> ClassPrivate) <= region.end;
    })) {
    return true;
  }
  return false;
}

UWorld * GetGWorld() {
  auto GEngine = * (UEngine ** )(libUE4Base + GEngine_Offset);;
  if (GEngine) {
    auto ViewPort = GEngine -> GameViewport;
    if (ViewPort) {
      return ViewPort -> World;
    }
  }
  return 0;
}

SDK::UWorld * GWorld() {
  auto GEngine = * (UEngine ** )(libUE4Base + GEngine_Offset);;
  if (GEngine) {
    auto ViewPort = GEngine -> GameViewport;
    if (ViewPort) {
      return ViewPort -> World;
    }
  }
  return 0;
}

TNameEntryArray * GetGNames() {
  return ((TNameEntryArray * ( * )())(libUE4Base + GNames_Offset))();
}

std::vector < AActor * > getActors() {
  auto World = GetGWorld();
  if (!World)
    return std::vector < AActor * > ();

  auto PersistentLevel = World -> PersistentLevel;
  if (!PersistentLevel)
    return std::vector < AActor * > ();

  struct GovnoArray {
    uintptr_t base;
    int32_t count;
    int32_t max;
  };
  static thread_local GovnoArray Actors {};

  Actors = * (((GovnoArray * ( * )(uintptr_t))(libUE4Base + GetActorArray_Offset))(reinterpret_cast < uintptr_t > (PersistentLevel)));

  if (Actors.count <= 0) {
    return {};
  }

  std::vector < AActor * > actors;
  for (int i = 0; i < Actors.count; i++) {
    uintptr_t Actor = * (uintptr_t * )(Actors.base + (i * sizeof(uintptr_t)));
    if (Actor) {
      actors.push_back(reinterpret_cast < AActor *
        const > (Actor));
    }
  }
  return actors;
}

std::string getObjectName(UObject * Object) {
  std::string s;
  for (auto super = Object -> ClassPrivate; super; super = (UClass * ) super -> SuperStruct) {
    if (!s.empty())
      s += ".";
    s += super -> NamePrivate.GetName();
  }
  return s;
}

void GetGName_GUObject() {
  while (!FName::GNames) {
    FName::GNames = GetGNames();
    sleep(1);
  }

  while (!UObject::GUObjectArray) {
    UObject::GUObjectArray = (FUObjectArray * )(libUE4Base + GUObject_Offset);
    sleep(1);
  }
}

ASTExtraPlayerCharacter * m_LocalPlayer = 0;
ASTExtraPlayerController * m_LocalController = 0;

void updateSkin() {

  #pragma region Helmet lv1

  if (ModSkin.Helmet1 == 1) {
    new_Skin.Helmet1 = 1502001014; // hell rider (Lv. 1)
    new_Skin.Helmet4 = 1502001014; // hell rider (Lv. 1)
    new_Skin.Helmet6 = 1502001014; // hell rider (Lv. 1)
  }
  if (ModSkin.Helmet1 == 2) {
    new_Skin.Helmet1 = 1502001183; //Godzilla Helmet (Lv. 1)
    new_Skin.Helmet4 = 1502001183; //Godzilla Helmet (Lv. 1)
    new_Skin.Helmet6 = 1502001183; //Godzilla Helmet (Lv. 1)
  }
  if (ModSkin.Helmet1 == 3) {
    new_Skin.Helmet1 = 1502001069; //Masked Psychic Helmet
    new_Skin.Helmet4 = 1502001069; //Masked Psychic Helmet
    new_Skin.Helmet6 = 1502001069; //Masked Psychic Helmet
  }
  if (ModSkin.Helmet1 == 4) {
    new_Skin.Helmet1 = 1502001335; //Minimalist Tech Helmet (Lv. 1)
    new_Skin.Helmet4 = 1502001335; //Minimalist Tech Helmet (Lv. 1)
    new_Skin.Helmet6 = 1502001335; //Minimalist Tech Helmet (Lv. 1)
  }
  if (ModSkin.Helmet1 == 5) {
    new_Skin.Helmet1 = 1502001039; //Dragonling Helmet (Lv. 1)
    new_Skin.Helmet4 = 1502001039; //Dragonling Helmet (Lv. 1)
    new_Skin.Helmet6 = 1502001039; //Dragonling Helmet (Lv. 1)
  }
  if (ModSkin.Helmet1 == 6) {
    new_Skin.Helmet1 = 1502001172; //Woolly Dragon Helmet (Lv. 1)
    new_Skin.Helmet4 = 1502001172; //Woolly Dragon Helmet (Lv. 1)
    new_Skin.Helmet6 = 1502001172; //Woolly Dragon Helmet (Lv. 1)
  }
  if (ModSkin.Helmet1 == 7) {
    new_Skin.Helmet1 = 1502001336; //Dragon Guard Helmet (Lv. 1)
    new_Skin.Helmet4 = 1502001336; //Dragon Guard Helmet (Lv. 1)
    new_Skin.Helmet6 = 1502001336; //Dragon Guard Helmet (Lv. 1)
  }
  if (ModSkin.Helmet1 == 8) {
    new_Skin.Helmet1 = 1502001092; //Sky Barrier Helmet (Lv. 1)
    new_Skin.Helmet4 = 1502001092; //Sky Barrier Helmet (Lv. 1)
    new_Skin.Helmet6 = 1502001092; //Sky Barrier Helmet (Lv. 1)
  }
  if (ModSkin.Helmet1 == 9) {
    new_Skin.Helmet1 = 1502003014; //Inferno Rider Helmet (Lv. 1) //Pharaoh
    new_Skin.Helmet4 = 1502003014; //Inferno Rider Helmet (Lv. 1) //Pharaoh
    new_Skin.Helmet6 = 1502003014; //Inferno Rider Helmet (Lv. 1) //Pharaoh
  }
  if (ModSkin.Helmet1 == 10) {
    new_Skin.Helmet1 = 1502001242; //GacktMoon Godzilla-Mecha
    new_Skin.Helmet4 = 1502001242; //GacktMoon Godzilla-Mecha
    new_Skin.Helmet6 = 1502001242; //GacktMoon Godzilla-Mecha
  }
  if (ModSkin.Helmet1 == 11) {
    new_Skin.Helmet1 = 1502001244; //Urban Ghost
    new_Skin.Helmet4 = 1502001244; //Urban Ghost
    new_Skin.Helmet6 = 1502001244; //Urban Ghost
  }
  #pragma endregion
  #pragma region Helmet lv2
  if (ModSkin.Helmet2 == 1) {
    new_Skin.Helmet2 = 1502002014;
    new_Skin.Helmet5 = 1502002014;
    new_Skin.Helmet7 = 1502002014;
  }
  if (ModSkin.Helmet2 == 2) {
    new_Skin.Helmet2 = 1502002183; //Godzilla Helmet (Lv. 3)
    new_Skin.Helmet5 = 1502002183; //Godzilla Helmet (Lv. 3)
    new_Skin.Helmet7 = 1502002183; //Godzilla Helmet (Lv. 3)
  }
  if (ModSkin.Helmet2 == 3) {
    new_Skin.Helmet2 = 1502002069; //Masked Psychic Helmet
    new_Skin.Helmet5 = 1502002069; //Masked Psychic Helmet
    new_Skin.Helmet7 = 1502002069; //Masked Psychic Helmet
  }
  if (ModSkin.Helmet2 == 4) {
    new_Skin.Helmet2 = 1502002335; //Minimalist Tech Helmet (Lv. 3)
    new_Skin.Helmet5 = 1502002335; //Minimalist Tech Helmet (Lv. 3)
    new_Skin.Helmet7 = 1502002335; //Minimalist Tech Helmet (Lv. 3)
  }
  if (ModSkin.Helmet2 == 5) {
    new_Skin.Helmet2 = 1502002039; //Dragonling Helmet (Lv. 3)
    new_Skin.Helmet5 = 1502002039; //Dragonling Helmet (Lv. 3)
    new_Skin.Helmet7 = 1502002039; //Dragonling Helmet (Lv. 3)
  }
  if (ModSkin.Helmet2 == 6) {
    new_Skin.Helmet2 = 1502002172; //Woolly Dragon Helmet (Lv. 3)
    new_Skin.Helmet5 = 1502002172; //Woolly Dragon Helmet (Lv. 3)
    new_Skin.Helmet7 = 1502002172; //Woolly Dragon Helmet (Lv. 3)
  }
  if (ModSkin.Helmet2 == 7) {
    new_Skin.Helmet2 = 1502002336; //Dragon Guard Helmet (Lv. 3)
    new_Skin.Helmet5 = 1502002336; //Dragon Guard Helmet (Lv. 3)
    new_Skin.Helmet7 = 1502002336; //Dragon Guard Helmet (Lv. 3)
  }
  if (ModSkin.Helmet2 == 8) {
    new_Skin.Helmet2 = 1502002092; //Sky Barrier Helmet (Lv. 3)
    new_Skin.Helmet5 = 1502002092; //Sky Barrier Helmet (Lv. 3)
    new_Skin.Helmet7 = 1502002092; //Sky Barrier Helmet (Lv. 3)
  }
  if (ModSkin.Helmet2 == 9) {
    new_Skin.Helmet2 = 1502002014; //Inferno Rider Helmet (Lv. 3) //Pharaoh
    new_Skin.Helmet5 = 1502002014; //Inferno Rider Helmet (Lv. 3) //Pharaoh
    new_Skin.Helmet7 = 1502002014; //Inferno Rider Helmet (Lv. 3) //Pharaoh
  }
  if (ModSkin.Helmet2 == 10) {
    new_Skin.Helmet2 = 1502002242; //GacktMoon Godzilla-Mecha
    new_Skin.Helmet5 = 1502002242; //GacktMoon Godzilla-Mecha
    new_Skin.Helmet7 = 1502002242; //GacktMoon Godzilla-Mecha
  }
  if (ModSkin.Helmet2 == 11) {
    new_Skin.Helmet2 = 1502002244; //Urban Ghost
    new_Skin.Helmet5 = 1502002244; //Urban Ghost
    new_Skin.Helmet7 = 1502002244; //Urban Ghost
  }
  #pragma endregion
  #pragma region Helmet lv3

  if (ModSkin.Helmet3 == 1) {
    new_Skin.Helmet3 = 1502003014;
    new_Skin.Helmet8 = 1502003014;
  }
  if (ModSkin.Helmet3 == 10) {
    new_Skin.Helmet3 = 1502003242; //GacktMoon Godzilla-Mecha
    new_Skin.Helmet6 = 1502003242; //GacktMoon Godzilla-Mecha
  }
  if (ModSkin.Helmet3 == 11) {
    new_Skin.Helmet3 = 1502003244; //Urban Ghost
    new_Skin.Helmet6 = 1502003244; //Urban Ghost
  }
  if (ModSkin.Helmet3 == 2) {
    new_Skin.Helmet3 = 1502003183; //Godzilla Helmet (Lv. 3)
    new_Skin.Helmet6 = 1502003183; //Godzilla Helmet (Lv. 3)
  }
  if (ModSkin.Helmet3 == 3) {
    new_Skin.Helmet3 = 1502003069; //Masked Psychic Helmet
    new_Skin.Helmet6 = 1502003069; //Masked Psychic Helmet
  }
  if (ModSkin.Helmet3 == 4) {
    new_Skin.Helmet3 = 1502003335; //Minimalist Tech Helmet (Lv. 3)
    new_Skin.Helmet6 = 1502003335; //Minimalist Tech Helmet (Lv. 3)
  }
  if (ModSkin.Helmet3 == 5) {
    new_Skin.Helmet3 = 1502003039; //Dragonling Helmet (Lv. 3)
    new_Skin.Helmet6 = 1502003039; //Dragonling Helmet (Lv. 3)
  }
  if (ModSkin.Helmet3 == 6) {
    new_Skin.Helmet3 = 1502003172; //Woolly Dragon Helmet (Lv. 3)
    new_Skin.Helmet6 = 1502003172; //Woolly Dragon Helmet (Lv. 3)
  }
  if (ModSkin.Helmet3 == 7) {
    new_Skin.Helmet3 = 1502003336; //Dragon Guard Helmet (Lv. 3)
    new_Skin.Helmet6 = 1502003336; //Dragon Guard Helmet (Lv. 3)
  }
  if (ModSkin.Helmet3 == 8) {
    new_Skin.Helmet3 = 1502003092; //Sky Barrier Helmet (Lv. 3)
    new_Skin.Helmet6 = 1502003092; //Sky Barrier Helmet (Lv. 3)
  }
  if (ModSkin.Helmet3 == 9) {
    new_Skin.Helmet3 = 1502003014; //Inferno Rider Helmet (Lv. 3) //Pharaoh
    new_Skin.Helmet6 = 1502003014; //Inferno Rider Helmet (Lv. 3) //Pharaoh
  }
  #pragma endregion

  if (ModSkin.Parachute == 0)
    new_Skin.Parachute = 703001;
  if (ModSkin.Parachute == 16)
    new_Skin.Parachute = 1401619; //Pharaoh's Scarab Parachute
  if (ModSkin.Parachute == 1)
    new_Skin.Parachute = 1401619; //Pharaoh's Scarab Parachute
  if (ModSkin.Parachute == 2)
    new_Skin.Parachute = 1401625; // Enigmatic Nomad Parachute
  if (ModSkin.Parachute == 3)
    new_Skin.Parachute = 1401624; //parashot Parachute
  if (ModSkin.Parachute == 4)
    new_Skin.Parachute = 1401836; //Paperfold Gambit Parachute
  if (ModSkin.Parachute == 5)
    new_Skin.Parachute = 1401833; //Labyrinth Beast Parachute
  if (ModSkin.Parachute == 6)
    new_Skin.Parachute = 1401287; //Flamewraith Parachute
  if (ModSkin.Parachute == 7)
    new_Skin.Parachute = 1401282; //Mega Kitty Parachute
  if (ModSkin.Parachute == 8)
    new_Skin.Parachute = 1401385; //Mega Yeti Parachute
  if (ModSkin.Parachute == 9)
    new_Skin.Parachute = 1401549; //Endless Glory Parachute
  if (ModSkin.Parachute == 10)
    new_Skin.Parachute = 1401336; //Magma Skull Parachute
  if (ModSkin.Parachute == 11)
    new_Skin.Parachute = 1401335; //Aquatic Fury Parachute
  if (ModSkin.Parachute == 12)
    new_Skin.Parachute = 1401629; //CyberGen: Zero Parachute
  if (ModSkin.Parachute == 13)
    new_Skin.Parachute = 1401628; //Radiant Phoenix Adarna Parachute
  if (ModSkin.Parachute == 14)
    new_Skin.Parachute = 1401615; //Will of Horus
  if (ModSkin.Parachute == 15)
    new_Skin.Parachute = 1401613; //Anubian Magistrate Parachute

  if (ModSkin.Pan == 0)
    new_Skin.Pan = 108004; // 108004 - Pan
  if (ModSkin.Pan == 1)
    new_Skin.Pan = 1108004125; // Honeypot - Pan
  if (ModSkin.Pan == 2)
    new_Skin.Pan = 1108004145; // Night of Rock - Pan
  if (ModSkin.Pan == 3)
    new_Skin.Pan = 1108004160; // Crocodile - Pan
  if (ModSkin.Pan == 4)
    new_Skin.Pan = 1108004283; // Accolade - Pan
  if (ModSkin.Pan == 5)
    new_Skin.Pan = 1108004337; // Break Pad - Pan
  if (ModSkin.Pan == 6)
    new_Skin.Pan = 1108004356; // Chicken Hot - Pan
  if (ModSkin.Pan == 7)
    new_Skin.Pan = 1108004365; // Faerie Luster - Pan

  if (ModSkin.XSuits == 0) {
    new_Skin.XSuits = 403003;
    new_Skin.XSuits1 = 40604002;
  }
  if (ModSkin.XSuits == 1) {
    new_Skin.XSuits = 1405628;
    new_Skin.XSuits1 = 1402578;
  }
  if (ModSkin.XSuits == 2) {
    new_Skin.XSuits = 1405870;
    new_Skin.XSuits1 = 1403257;
  }
  if (ModSkin.XSuits == 3) {
    new_Skin.XSuits = 1405983;
    new_Skin.XSuits1 = 1402874;
  }
  if (ModSkin.XSuits == 4) {
    new_Skin.XSuits = 1406152;
    new_Skin.XSuits1 = 1403393;
  }
  if (ModSkin.XSuits == 5) {
    new_Skin.XSuits = 1406311;
    new_Skin.XSuits1 = 1410011; //Mặt nạ 1.403.414
  }
  if (ModSkin.XSuits == 6) {
    new_Skin.XSuits = 1406475;
    new_Skin.XSuits1 = 1410131;
  }
  if (ModSkin.XSuits == 7) {
    new_Skin.XSuits = 1406638;
    new_Skin.XSuits1 = 1410242;
  }
  if (ModSkin.XSuits == 8) {
    new_Skin.XSuits = 1406872;
    //new_Skin.XSuits1 = 1410346; // khung
    new_Skin.XSuits1 = 402133;
  }
  if (ModSkin.XSuits == 9) {
    new_Skin.XSuits = 1406971;
    new_Skin.XSuits1 = 402147;
  }
  if (ModSkin.XSuits == 10) {
    new_Skin.XSuits = 1407103;
    new_Skin.XSuits1 = 40604002;
  }
  if (ModSkin.XSuits == 11) {
    new_Skin.XSuits = 1405174;
    new_Skin.XSuits1 = 40604012;
  }
  if (ModSkin.XSuits == 12) {
    new_Skin.XSuits = 1400687;
  }
  if (ModSkin.XSuits == 13) {
    new_Skin.XSuits = 1406891;
    new_Skin.XSuits1 = 1410436;
  }

  if (ModSkin.Balo == 0) {
    new_Skin.Balo1 = 501001;
    new_Skin.Balo2 = 501002;
    new_Skin.Balo3 = 501003;
    new_Skin.Balo4 = 501004;
    new_Skin.Balo5 = 501005;
    new_Skin.Balo6 = 501006;
  }
  if (ModSkin.Balo == 1) //Pharaoh
  {
    new_Skin.Balo1 = 1501001174;
    new_Skin.Balo2 = 1501002174;
    new_Skin.Balo3 = 1501003174;
    new_Skin.Balo4 = 1501001174;
    new_Skin.Balo5 = 1501002174;
    new_Skin.Balo6 = 1501003174;
  }
  if (ModSkin.Balo == 2) //Huyết Nha
  {
    new_Skin.Balo1 = 1501001220;
    new_Skin.Balo2 = 1501002220;
    new_Skin.Balo3 = 1501003220;
    new_Skin.Balo4 = 1501001220;
    new_Skin.Balo5 = 1501002220;
    new_Skin.Balo6 = 1501003220;
  }
  if (ModSkin.Balo == 3) //Posident
  {
    new_Skin.Balo1 = 1501001336;
    new_Skin.Balo2 = 1501002336;
    new_Skin.Balo3 = 1501003336;
    new_Skin.Balo4 = 1501001336;
    new_Skin.Balo5 = 1501002336;
    new_Skin.Balo6 = 1501003336;
  }
  if (ModSkin.Balo == 4) //Godzilla
  {
    new_Skin.Balo1 = 1501001277;
    new_Skin.Balo2 = 1501002277;
    new_Skin.Balo3 = 1501003277;
    new_Skin.Balo4 = 1501001277;
    new_Skin.Balo5 = 1501002277;
    new_Skin.Balo6 = 1501003277;
  }
  if (ModSkin.Balo == 5) //Bape
  {
    new_Skin.Balo1 = 1501001058;
    new_Skin.Balo2 = 1501002058;
    new_Skin.Balo3 = 1501003058;
    new_Skin.Balo4 = 1501001058;
    new_Skin.Balo5 = 1501002058;
    new_Skin.Balo6 = 1501003058;
  }

  if (ModSkin.AKM == 0) {
    new_Skin.AKM = 10100100;
    new_Skin.AKM_Mag = 20500500;
  }
  if (ModSkin.AKM == 1) {
    new_Skin.AKM = 1101001089;
    new_Skin.AKM_Mag = 1010010891;
  }
  if (ModSkin.AKM == 2) {
    new_Skin.AKM = 1101001103;
    new_Skin.AKM_Mag = 1010011031;
  }
  if (ModSkin.AKM == 3) {
    new_Skin.AKM = 1101001116;
    new_Skin.AKM_Mag = 1010011161;
  }
  if (ModSkin.AKM == 4) {
    new_Skin.AKM = 1101001128;
    new_Skin.AKM_Mag = 1010011281;
  }
  if (ModSkin.AKM == 5) {
    new_Skin.AKM = 1101001143;
    new_Skin.AKM_Mag = 1010011431;
  }
  if (ModSkin.AKM == 6) {
    new_Skin.AKM = 1101001154;
    new_Skin.AKM_Mag = 1010011541;
  }
  if (ModSkin.AKM == 7) {
    new_Skin.AKM = 1101001174;
    new_Skin.AKM_Mag = 1010011741;
  }
  if (ModSkin.AKM == 8) {
    new_Skin.AKM = 1101001213;
    new_Skin.AKM_Mag = 1010012131;
  }
  if (ModSkin.AKM == 9) {
    new_Skin.AKM = 1101001231;
    new_Skin.AKM_Mag = 1010012311;
  }
  if (ModSkin.AKM == 10) {
    new_Skin.AKM = 1101001242;
    new_Skin.AKM_Mag = 1010012421;
  }
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  if (ModSkin.M16A4 == 0) {
    new_Skin.M16A4 = 10100200;
    new_Skin.M16A4_Stock = 20500700;
    new_Skin.M16A4_Mag = 29100200;
  }
  if (ModSkin.M16A4 == 1) {
    new_Skin.M16A4 = 1101002029;
    new_Skin.M16A4_Stock = 1010020292;
    new_Skin.M16A4_Mag = 1010020291;
  }
  if (ModSkin.M16A4 == 2) {
    new_Skin.M16A4 = 1101002056;
    new_Skin.M16A4_Stock = 1010020562;
    new_Skin.M16A4_Mag = 1010020561;
  }
  if (ModSkin.M16A4 == 3) {
    new_Skin.M16A4 = 1101002068;
    new_Skin.M16A4_Stock = 1010020682;
    new_Skin.M16A4_Mag = 1010020681;
  }
  if (ModSkin.M16A4 == 4) {
    new_Skin.M16A4 = 1101002081;
    new_Skin.M16A4_Stock = 1010020812;
    new_Skin.M16A4_Mag = 1010020811;
  }
  if (ModSkin.M16A4 == 5) {
    new_Skin.M16A4 = 1101002103;
    new_Skin.M16A4_Stock = 1010021032;
    new_Skin.M16A4_Mag = 1010021031;
  }
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  if (ModSkin.Scar == 0) {
    new_Skin.Scar = 10100300;
    new_Skin.Scar_Mag = 29100300;
  }
  if (ModSkin.Scar == 1) {
    new_Skin.Scar = 1101003057;
    new_Skin.Scar_Mag = 1010030571;
  }
  if (ModSkin.Scar == 2) {
    new_Skin.Scar = 1101003070;
    new_Skin.Scar_Mag = 1010030701;
  }
  if (ModSkin.Scar == 3) {
    new_Skin.Scar = 1101003080;
    new_Skin.Scar_Mag = 1010030801;
  }
  if (ModSkin.Scar == 4) {
    new_Skin.Scar = 1101003119;
    new_Skin.Scar_Mag = 1010031191;
  }
  if (ModSkin.Scar == 5) {
    new_Skin.Scar = 1101003146;
    new_Skin.Scar_Mag = 1010031461;
  }
  if (ModSkin.Scar == 6) {
    new_Skin.Scar = 1101003167;
    new_Skin.Scar_Mag = 1010031671;
  }
  if (ModSkin.Scar == 7) {
    new_Skin.Scar = 1101003181;
    new_Skin.Scar_Mag = 1010031811;
  }
  ///////////////////////////////////

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  if (ModSkin.M416 == 0) {
    new_Skin.M416_1 = 101004;
    new_Skin.M416_2 = 291004;
    new_Skin.M416_3 = 203008;
    new_Skin.M416_4 = 205005;
    new_Skin.M416_flash = 201010;
    new_Skin.M416_compe = 201009;
    new_Skin.M416_silent = 201011;
    new_Skin.M416_reddot = 203001;
    new_Skin.M416_holo = 203002;
    new_Skin.M416_x2 = 203003;
    new_Skin.M416_x3 = 203014;
    new_Skin.M416_x4 = 203004;
    new_Skin.M416_x6 = 203015;
    new_Skin.M416_quickMag = 204012;
    new_Skin.M416_extendedMag = 204011;
    new_Skin.M416_quickNextended = 204013;
    new_Skin.M416_stock = 205002;
    new_Skin.M416_verical = 203015;
    new_Skin.M416_angle = 20200100;
    new_Skin.M416_lightgrip = 202004;
    new_Skin.M416_pink = 202005;
    new_Skin.M416_lazer = 203015;
    new_Skin.M416_thumb = 202006;
  }
  if (ModSkin.M416 == 1) {
    new_Skin.M416_1 = 1101004046;
    new_Skin.M416_2 = 1010040461;
    new_Skin.M416_3 = 1010040462;
    new_Skin.M416_4 = 1010040463;
    new_Skin.M416_flash = 1010040474;
    new_Skin.M416_compe = 1010040475;
    new_Skin.M416_silent = 1010040476;
    new_Skin.M416_reddot = 1010040470;
    new_Skin.M416_holo = 1010040469;
    new_Skin.M416_x2 = 1010040468;
    new_Skin.M416_x3 = 1010040467;
    new_Skin.M416_x4 = 1010040466;
    new_Skin.M416_x6 = 1010040481;
    new_Skin.M416_quickMag = 1010040471;
    new_Skin.M416_extendedMag = 1010040472;
    new_Skin.M416_quickNextended = 1010040473;
    new_Skin.M416_stock = 1010040480;
    new_Skin.M416_verical = 1010040479;
    new_Skin.M416_thumb = 1010040478;
    new_Skin.M416_angle = 1010040477;
    new_Skin.M416_lightgrip = 1010040482;
    new_Skin.M416_pink = 1010040483;
    new_Skin.M416_lazer = 1010040484;
  }
  if (ModSkin.M416 == 2) {
    new_Skin.M416_1 = 1101004062;
    new_Skin.M416_2 = 1010040611;
    new_Skin.M416_3 = 1010040612;
    new_Skin.M416_4 = 1010040613;
    new_Skin.M416_flash = 201010;
    new_Skin.M416_compe = 201009;
    new_Skin.M416_silent = 201011;
    new_Skin.M416_reddot = 203001;
    new_Skin.M416_holo = 203002;
    new_Skin.M416_x2 = 203003;
    new_Skin.M416_x3 = 203014;
    new_Skin.M416_x4 = 203004;
    new_Skin.M416_x6 = 203015;
    new_Skin.M416_quickMag = 204012;
    new_Skin.M416_extendedMag = 204011;
    new_Skin.M416_quickNextended = 204013;
    new_Skin.M416_stock = 205002;
    new_Skin.M416_verical = 203015;
    new_Skin.M416_angle = 202001;
    new_Skin.M416_lightgrip = 202004;
    new_Skin.M416_pink = 202005;
    new_Skin.M416_lazer = 203015;
    new_Skin.M416_thumb = 202006;
  }
  if (ModSkin.M416 == 3) {
    new_Skin.M416_1 = 1101004078;
    new_Skin.M416_2 = 1010040781;
    new_Skin.M416_3 = 1010040782;
    new_Skin.M416_4 = 1010040783;
    new_Skin.M416_flash = 201010;
    new_Skin.M416_compe = 201009;
    new_Skin.M416_silent = 201011;
    new_Skin.M416_reddot = 203001;
    new_Skin.M416_holo = 203002;
    new_Skin.M416_x2 = 203003;
    new_Skin.M416_x3 = 203014;
    new_Skin.M416_x4 = 203004;
    new_Skin.M416_x6 = 203015;
    new_Skin.M416_quickMag = 204012;
    new_Skin.M416_extendedMag = 204011;
    new_Skin.M416_quickNextended = 204013;
    new_Skin.M416_stock = 205002;
    new_Skin.M416_verical = 203015;
    new_Skin.M416_angle = 202001;
    new_Skin.M416_lightgrip = 202004;
    new_Skin.M416_pink = 202005;
    new_Skin.M416_lazer = 203015;
    new_Skin.M416_thumb = 202006;
  }
  if (ModSkin.M416 == 4) {
    new_Skin.M416_1 = 1101004086;
    new_Skin.M416_2 = 1010040861;
    new_Skin.M416_3 = 1010040862;
    new_Skin.M416_4 = 1010040863;
    new_Skin.M416_flash = 201010;
    new_Skin.M416_compe = 201009;
    new_Skin.M416_silent = 201011;
    new_Skin.M416_reddot = 203001;
    new_Skin.M416_holo = 203002;
    new_Skin.M416_x2 = 203003;
    new_Skin.M416_x3 = 203014;
    new_Skin.M416_x4 = 203004;
    new_Skin.M416_x6 = 203015;
    new_Skin.M416_quickMag = 204012;
    new_Skin.M416_extendedMag = 204011;
    new_Skin.M416_quickNextended = 204013;
    new_Skin.M416_stock = 205002;
    new_Skin.M416_verical = 203015;
    new_Skin.M416_angle = 202001;
    new_Skin.M416_lightgrip = 202004;
    new_Skin.M416_pink = 202005;
    new_Skin.M416_lazer = 203015;
    new_Skin.M416_thumb = 202006;
  }
  if (ModSkin.M416 == 5) {
    new_Skin.M416_1 = 1101004098;
    new_Skin.M416_2 = 1010040981;
    new_Skin.M416_3 = 1010040982;
    new_Skin.M416_4 = 1010040983;
    new_Skin.M416_flash = 201010;
    new_Skin.M416_compe = 201009;
    new_Skin.M416_silent = 201011;
    new_Skin.M416_reddot = 203001;
    new_Skin.M416_holo = 203002;
    new_Skin.M416_x2 = 203003;
    new_Skin.M416_x3 = 203014;
    new_Skin.M416_x4 = 203004;
    new_Skin.M416_x6 = 203015;
    new_Skin.M416_quickMag = 204012;
    new_Skin.M416_extendedMag = 204011;
    new_Skin.M416_quickNextended = 204013;
    new_Skin.M416_stock = 205002;
    new_Skin.M416_verical = 203015;
    new_Skin.M416_angle = 202001;
    new_Skin.M416_lightgrip = 202004;
    new_Skin.M416_pink = 202005;
    new_Skin.M416_lazer = 203015;
    new_Skin.M416_thumb = 202006;
  }
  if (ModSkin.M416 == 6) {
    new_Skin.M416_1 = 1101004138;
    new_Skin.M416_2 = 1010041381;
    new_Skin.M416_3 = 1010041382;
    new_Skin.M416_4 = 1010041383;
    new_Skin.M416_flash = 1010041136;
    new_Skin.M416_compe = 1010041137;
    new_Skin.M416_silent = 1010041138;
    new_Skin.M416_reddot = 1010041128;
    new_Skin.M416_holo = 1010041127;
    new_Skin.M416_x2 = 1010041126;
    new_Skin.M416_x3 = 1010041125;
    new_Skin.M416_x4 = 1010041124;
    new_Skin.M416_x6 = 203015;
    new_Skin.M416_quickMag = 1010041134;
    new_Skin.M416_extendedMag = 1010041129;
    new_Skin.M416_quickNextended = 1010041135;
    new_Skin.M416_stock = 1010041146;
    new_Skin.M416_verical = 1010041145;
    new_Skin.M416_angle = 1010041139;
    new_Skin.M416_lightgrip = 202004;
    new_Skin.M416_pink = 202005;
    new_Skin.M416_lazer = 203015;
    new_Skin.M416_thumb = 202006;
  }
  if (ModSkin.M416 == 7) {
    new_Skin.M416_1 = 1101004163;
    new_Skin.M416_2 = 1010041631;
    new_Skin.M416_3 = 1010041632;
    new_Skin.M416_4 = 1010041633;
    new_Skin.M416_flash = 201010;
    new_Skin.M416_compe = 1010041574;
    new_Skin.M416_silent = 1010041575;
    new_Skin.M416_reddot = 1010041566;
    new_Skin.M416_holo = 1010041565;
    new_Skin.M416_x2 = 1010041564;
    new_Skin.M416_x3 = 1010041560;
    new_Skin.M416_x4 = 1010041554;
    new_Skin.M416_x6 = 203015;
    new_Skin.M416_quickMag = 1010041568;
    new_Skin.M416_extendedMag = 1010041569;
    new_Skin.M416_quickNextended = 1010041567;
    new_Skin.M416_stock = 1010041579;
    new_Skin.M416_verical = 1010041578;
    new_Skin.M416_angle = 1010041576;
    new_Skin.M416_lightgrip = 20200400;
    new_Skin.M416_pink = 202005;
    new_Skin.M416_lazer = 203015;
    new_Skin.M416_thumb = 1010041577;
  }
  if (ModSkin.M416 == 8) {
    new_Skin.M416_1 = 1101004201;
    new_Skin.M416_2 = 1010042011;
    new_Skin.M416_3 = 1010042012;
    new_Skin.M416_4 = 1010042013;
    new_Skin.M416_flash = 1010041956;
    new_Skin.M416_compe = 1010041957;
    new_Skin.M416_silent = 1010041958;
    new_Skin.M416_reddot = 1010041948;
    new_Skin.M416_holo = 1010041947;
    new_Skin.M416_x2 = 1010041946;
    new_Skin.M416_x3 = 1010041945;
    new_Skin.M416_x4 = 1010041944;
    new_Skin.M416_x6 = 1010041967;
    new_Skin.M416_quickMag = 1010041949;
    new_Skin.M416_extendedMag = 1010041950;
    new_Skin.M416_quickNextended = 1010041955;
    new_Skin.M416_stock = 1010041966;
    new_Skin.M416_verical = 1010041965;
    new_Skin.M416_angle = 1010041959;
    new_Skin.M416_lightgrip = 202004;
    new_Skin.M416_pink = 202005;
    new_Skin.M416_lazer = 203015;
    new_Skin.M416_thumb = 202006;
  }
  if (ModSkin.M416 == 9) {
    new_Skin.M416_1 = 1101004209;
    new_Skin.M416_2 = 1010042073;
    new_Skin.M416_3 = 1010042083;
    new_Skin.M416_4 = 1010042093;
    new_Skin.M416_flash = 20101000;
    new_Skin.M416_compe = 1010042037;
    new_Skin.M416_silent = 1010042039;
    new_Skin.M416_reddot = 1010042029;
    new_Skin.M416_holo = 1010042028;
    new_Skin.M416_x2 = 1010042027;
    new_Skin.M416_x3 = 1010042026;
    new_Skin.M416_x4 = 1010042025;
    new_Skin.M416_x6 = 1010042024;
    new_Skin.M416_quickMag = 1010042034;
    new_Skin.M416_extendedMag = 1010042035;
    new_Skin.M416_quickNextended = 1010042036;
    new_Skin.M416_stock = 1010042047;
    new_Skin.M416_verical = 1010042046;
    new_Skin.M416_angle = 1010042044;
    new_Skin.M416_lightgrip = 202004;
    new_Skin.M416_pink = 202005;
    new_Skin.M416_lazer = 203015;
    new_Skin.M416_thumb = 202006;
  }
  if (ModSkin.M416 == 10) {
    new_Skin.M416_1 = 1101004218;
    new_Skin.M416_2 = 1010042153;
    new_Skin.M416_3 = 1010042163;
    new_Skin.M416_4 = 1010042173;
    new_Skin.M416_flash = 1010042128;
    new_Skin.M416_compe = 1010042127;
    new_Skin.M416_silent = 1010042129;
    new_Skin.M416_reddot = 1010042119;
    new_Skin.M416_holo = 1010042118;
    new_Skin.M416_x2 = 1010042117;
    new_Skin.M416_x3 = 1010042116;
    new_Skin.M416_x4 = 1010042115;
    new_Skin.M416_x6 = 1010042114;
    new_Skin.M416_quickMag = 1010042124;
    new_Skin.M416_extendedMag = 1010042125;
    new_Skin.M416_quickNextended = 1010042126;
    new_Skin.M416_stock = 1010042137;
    new_Skin.M416_verical = 1010042136;
    new_Skin.M416_angle = 1010042134;
    new_Skin.M416_lightgrip = 1010042138;
    new_Skin.M416_pink = 1010042139;
    new_Skin.M416_lazer = 1010042144;
    new_Skin.M416_thumb = 1010042135;
  }
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  if (ModSkin.Groza == 0) {
    new_Skin.Groza = 10100500;
  }
  if (ModSkin.Groza == 1) {
    new_Skin.Groza = 1101005019;
  }
  if (ModSkin.Groza == 2) {
    new_Skin.Groza = 1101005025;
  }
  if (ModSkin.Groza == 3) {
    new_Skin.Groza = 1101005038;
  }
  if (ModSkin.Groza == 4) {
    new_Skin.Groza = 1101005043;
  }
  if (ModSkin.Groza == 5) {
    new_Skin.Groza = 1101005052;
  }
  if (ModSkin.Groza == 6) {
    new_Skin.Groza = 1101005082;
  }
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  if (ModSkin.AUG == 0)
    new_Skin.AUG = 10100600;
  if (ModSkin.AUG == 1)
    new_Skin.AUG = 1101006033;
  if (ModSkin.AUG == 2)
    new_Skin.AUG = 1101006044;
  if (ModSkin.AUG == 3)
    new_Skin.AUG = 1101006062;
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  if (ModSkin.QBZ == 0)
    new_Skin.QBZ = 10100700;
  if (ModSkin.QBZ == 1)
    new_Skin.QBZ = 1101007025;
  if (ModSkin.QBZ == 2)
    new_Skin.QBZ = 1101007036;
  if (ModSkin.QBZ == 3)
    new_Skin.QBZ = 1101007046;
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  if (ModSkin.M762 == 0) {
    new_Skin.M762 = 10100800;
    new_Skin.M762_Mag = 29100800;
  }
  if (ModSkin.M762 == 1) {
    new_Skin.M762 = 1101008026;
    new_Skin.M762_Mag = 1010080261;
  }
  if (ModSkin.M762 == 2) {
    new_Skin.M762 = 1101008051;
    new_Skin.M762_Mag = 1010080511;
  }
  if (ModSkin.M762 == 3) {
    new_Skin.M762 = 1101008061;
    new_Skin.M762_Mag = 1010080611;
  }
  if (ModSkin.M762 == 4) {
    new_Skin.M762 = 1101008081;
    new_Skin.M762_Mag = 1010080811;
  }
  if (ModSkin.M762 == 5) {
    new_Skin.M762 = 1101008104;
    new_Skin.M762_Mag = 1010081041;
  }
  if (ModSkin.M762 == 6) {
    new_Skin.M762 = 1101008116;
    new_Skin.M762_Mag = 1010081161;
  }
  if (ModSkin.M762 == 7) {
    new_Skin.M762 = 1101008126;
    new_Skin.M762_Mag = 1010081261;
  }
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  if (ModSkin.ACE32 == 0)
    new_Skin.ACE32 = 10110200;
  if (ModSkin.ACE32 == 1)
    new_Skin.ACE32 = 1101102007;
  if (ModSkin.ACE32 == 2)
    new_Skin.ACE32 = 1101102017;
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  if (ModSkin.Honey == 0)
    new_Skin.Honey = 10110200;
  if (ModSkin.Honey == 1)
    new_Skin.Honey = 1101012009;
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  if (ModSkin.UZI == 0)
    new_Skin.UZI = 10200100;
  if (ModSkin.UZI == 1)
    new_Skin.UZI = 1102001024;
  if (ModSkin.UZI == 2)
    new_Skin.UZI = 1102001036;
  if (ModSkin.UZI == 3)
    new_Skin.UZI = 1102001058;
  if (ModSkin.UZI == 4)
    new_Skin.UZI = 1102001069;
  if (ModSkin.UZI == 5)
    new_Skin.UZI = 1102001089;
  if (ModSkin.UZI == 6)
    new_Skin.UZI = 1102001102;
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  if (ModSkin.UMP == 0)
    new_Skin.UMP = 10200200;
  if (ModSkin.UMP == 1)
    new_Skin.UMP = 1102002043;
  if (ModSkin.UMP == 2)
    new_Skin.UMP = 1102002061;
  if (ModSkin.UMP == 3)
    new_Skin.UMP = 1102002090;
  if (ModSkin.UMP == 4)
    new_Skin.UMP = 1102002117;
  if (ModSkin.UMP == 5)
    new_Skin.UMP = 1102002124;
  if (ModSkin.UMP == 6)
    new_Skin.UMP = 1102002129;
  if (ModSkin.UMP == 7)
    new_Skin.UMP = 1102002136;
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  if (ModSkin.Vector == 0)
    new_Skin.Vector = 10200300;
  if (ModSkin.Vector == 1)
    new_Skin.Vector = 1102003020;
  if (ModSkin.Vector == 2)
    new_Skin.Vector = 1102003031;
  if (ModSkin.Vector == 3)
    new_Skin.Vector = 1102003065;
  if (ModSkin.Vector == 4)
    new_Skin.Vector = 1102003080;
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  if (ModSkin.Thompson == 0)
    new_Skin.Thompson = 10200400;
  if (ModSkin.Thompson == 1)
    new_Skin.Thompson = 1102004018;
  if (ModSkin.Thompson == 2)
    new_Skin.Thompson = 1102004034;
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  if (ModSkin.Bizon == 0)
    new_Skin.Bizon = 10200500;
  if (ModSkin.Bizon == 1)
    new_Skin.Bizon = 1102005007;
  if (ModSkin.Bizon == 2)
    new_Skin.Bizon = 1102005020;
  if (ModSkin.Bizon == 3)
    new_Skin.Bizon = 1102005041;
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  if (ModSkin.K98 == 0)
    new_Skin.K98 = 10300100;
  if (ModSkin.K98 == 1)
    new_Skin.K98 = 1103001060;
  if (ModSkin.K98 == 2)
    new_Skin.K98 = 1103001079;
  if (ModSkin.K98 == 3)
    new_Skin.K98 = 1103001101;
  if (ModSkin.K98 == 4)
    new_Skin.K98 = 1103001145;
  if (ModSkin.K98 == 5)
    new_Skin.K98 = 1103001160;
  if (ModSkin.K98 == 6)
    new_Skin.K98 = 1103001179;
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  if (new_Skin.M24 == 0)
    new_Skin.M24 = 10300200;
  if (ModSkin.M24 == 1)
    new_Skin.M24 = 1103002018;
  if (ModSkin.M24 == 2)
    new_Skin.M24 = 1103002030;
  if (ModSkin.M24 == 3)
    new_Skin.M24 = 1103002048;
  if (ModSkin.M24 == 4)
    new_Skin.M24 = 1103002056;
  if (ModSkin.M24 == 5)
    new_Skin.M24 = 1103002087;
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  if (ModSkin.AWM == 0)
    new_Skin.AWM = 10300300;
  if (ModSkin.AWM == 1)
    new_Skin.AWM = 1103003022;
  if (ModSkin.AWM == 2)
    new_Skin.AWM = 1103003030;
  if (ModSkin.AWM == 3)
    new_Skin.AWM = 1103003042;
  if (ModSkin.AWM == 4)
    new_Skin.AWM = 1103003051;
  if (ModSkin.AWM == 5)
    new_Skin.AWM = 1103003062;
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  if (ModSkin.AMR == 0)
    new_Skin.AMR = 10301200;
  if (ModSkin.AMR == 1)
    new_Skin.AMR = 1103012010;
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  if (ModSkin.VSS == 0)
    new_Skin.VSS = 10300500;
  if (ModSkin.VSS == 1)
    new_Skin.VSS = 1103005024;
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  if (ModSkin.VSS == 0)
    new_Skin.VSS = 10300400;
  if (ModSkin.SKS == 1)
    new_Skin.SKS = 1103004037;
  if (ModSkin.SKS == 2)
    new_Skin.SKS = 1103004046;
  if (ModSkin.SKS == 3)
    new_Skin.SKS = 1103004058;
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  if (ModSkin.Mini14 == 0)
    new_Skin.Mini14 = 10300600;
  if (ModSkin.Mini14 == 1)
    new_Skin.Mini14 = 1103006046;
  if (ModSkin.Mini14 == 2)
    new_Skin.Mini14 = 1103006030;
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  if (ModSkin.MK14 == 0)
    new_Skin.MK14 = 10300700;
  if (ModSkin.MK14 == 1)
    new_Skin.MK14 = 1103007020;
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  if (ModSkin.SLR == 0)
    new_Skin.SLR = 10300900;
  if (ModSkin.SLR == 1)
    new_Skin.SLR = 1103009037;
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  if (ModSkin.S1897 == 0)
    new_Skin.S1897 = 10400200;
  if (ModSkin.S1897 == 1)
    new_Skin.S1897 = 1104002022;
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  if (ModSkin.DP28 == 0)
    new_Skin.DP28 = 10500200;
  if (ModSkin.DP28 == 1)
    new_Skin.DP28 = 1105002018;
  if (ModSkin.DP28 == 2)
    new_Skin.DP28 = 1105002035;
  if (ModSkin.DP28 == 3)
    new_Skin.DP28 = 1105002058;
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  if (new_Skin.M249 == 0)
    new_Skin.M249 = 10500100;
  if (ModSkin.M249 == 1)
    new_Skin.M249 = 1105001020;
  if (ModSkin.M249 == 2)
    new_Skin.M249 = 1105001034;
  if (ModSkin.M249 == 3)
    new_Skin.M249 = 1105001048;
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  if (ModSkin.MG3 == 0)
    new_Skin.MG3 = 10501000;
  if (ModSkin.MG3 == 1)
    new_Skin.MG3 = 1105010008;
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  if (ModSkin.Skorpion == 0)
    new_Skin.Skorpion = 106008;
  if (ModSkin.Skorpion == 1)
    new_Skin.Skorpion = 1106008013;

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  if (ModSkin.Moto == 0)
    new_Skin.Moto = 1901001;
  if (ModSkin.Moto == 1)
    new_Skin.Moto = 1901073;
  if (ModSkin.Moto == 2)
    new_Skin.Moto = 1901074;
  if (ModSkin.Moto == 3)
    new_Skin.Moto = 1901075;
  if (ModSkin.Moto == 4)
    new_Skin.Moto = 1901047;
  if (ModSkin.Moto == 5)
    new_Skin.Moto = 1901085;
  if (ModSkin.Moto == 6)
    new_Skin.Moto = 1901076;
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  if (ModSkin.Dacia == 0)
    new_Skin.Dacia = 1903001;
  if (ModSkin.Dacia == 1)
    new_Skin.Dacia = 1903076;
  if (ModSkin.Dacia == 2)
    new_Skin.Dacia = 1903079;
  if (ModSkin.Dacia == 3)
    new_Skin.Dacia = 1903071;
  if (ModSkin.Dacia == 4)
    new_Skin.Dacia = 1903014;
  if (ModSkin.Dacia == 5)
    new_Skin.Dacia = 1903017;
  if (ModSkin.Dacia == 6)
    new_Skin.Dacia = 1903035;
  if (ModSkin.Dacia == 7)
    new_Skin.Dacia = 1903087;
  if (ModSkin.Dacia == 8)
    new_Skin.Dacia = 1903088;
  if (ModSkin.Dacia == 9)
    new_Skin.Dacia = 1903089;
  if (ModSkin.Dacia == 10)
    new_Skin.Dacia = 1903090;
  if (ModSkin.Dacia == 11)
    new_Skin.Dacia = 1903074;
  if (ModSkin.Dacia == 12)
    new_Skin.Dacia = 1903075;
  if (ModSkin.Dacia == 13)
    new_Skin.Dacia = 1903072;
  if (ModSkin.Dacia == 14)
    new_Skin.Dacia = 1903073;
  if (ModSkin.Dacia == 15)
    new_Skin.Dacia = 1903080;
  if (ModSkin.Dacia == 16)
    new_Skin.Dacia = 1903189;
  if (ModSkin.Dacia == 17)
    new_Skin.Dacia = 1903190;
  if (ModSkin.Dacia == 18)
    new_Skin.Dacia = 1903191;
  if (ModSkin.Dacia == 19)
    new_Skin.Dacia = 1903192;
  if (ModSkin.Dacia == 20)
    new_Skin.Dacia = 1903193;
  if (ModSkin.Dacia == 21)
    new_Skin.Dacia = 1903197;
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  if (ModSkin.CoupeRP == 0)
    new_Skin.CoupeRP = 1961001;
  if (ModSkin.CoupeRP == 1)
    new_Skin.CoupeRP = 1961024;
  if (ModSkin.CoupeRP == 2)
    new_Skin.CoupeRP = 1961047;
  if (ModSkin.CoupeRP == 3)
    new_Skin.CoupeRP = 1961034;
  if (ModSkin.CoupeRP == 4)
    new_Skin.CoupeRP = 1961018;
  if (ModSkin.CoupeRP == 5)
    new_Skin.CoupeRP = 1961007;
  if (ModSkin.CoupeRP == 6)
    new_Skin.CoupeRP = 1961010;
  if (ModSkin.CoupeRP == 7)
    new_Skin.CoupeRP = 1961049;
  if (ModSkin.CoupeRP == 8)
    new_Skin.CoupeRP = 1961048;
  if (ModSkin.CoupeRP == 9)
    new_Skin.CoupeRP = 1961012;
  if (ModSkin.CoupeRP == 10)
    new_Skin.CoupeRP = 1961013;
  if (ModSkin.CoupeRP == 11)
    new_Skin.CoupeRP = 1961014;
  if (ModSkin.CoupeRP == 12)
    new_Skin.CoupeRP = 1961015;
  if (ModSkin.CoupeRP == 13)
    new_Skin.CoupeRP = 1961016;
  if (ModSkin.CoupeRP == 14)
    new_Skin.CoupeRP = 1961017;
  if (ModSkin.CoupeRP == 15)
    new_Skin.CoupeRP = 1961020;
  if (ModSkin.CoupeRP == 16)
    new_Skin.CoupeRP = 1961021;
  if (ModSkin.CoupeRP == 17)
    new_Skin.CoupeRP = 1961025;
  if (ModSkin.CoupeRP == 18)
    new_Skin.CoupeRP = 1961029;
  if (ModSkin.CoupeRP == 19)
    new_Skin.CoupeRP = 1961030;
  if (ModSkin.CoupeRP == 20)
    new_Skin.CoupeRP = 1961031;
  if (ModSkin.CoupeRP == 21)
    new_Skin.CoupeRP = 1961032;
  if (ModSkin.CoupeRP == 22)
    new_Skin.CoupeRP = 1961033;
  if (ModSkin.CoupeRP == 23)
    new_Skin.CoupeRP = 1961035;
  if (ModSkin.CoupeRP == 24)
    new_Skin.CoupeRP = 1961036;
  if (ModSkin.CoupeRP == 22)
    new_Skin.CoupeRP = 1961037;
  if (ModSkin.CoupeRP == 26)
    new_Skin.CoupeRP = 1961038;
  if (ModSkin.CoupeRP == 27)
    new_Skin.CoupeRP = 1961039;
  if (ModSkin.CoupeRP == 28)
    new_Skin.CoupeRP = 1961040;
  if (ModSkin.CoupeRP == 29)
    new_Skin.CoupeRP = 1961041;
  if (ModSkin.CoupeRP == 30)
    new_Skin.CoupeRP = 1961042;
  if (ModSkin.CoupeRP == 31)
    new_Skin.CoupeRP = 1961043;
  if (ModSkin.CoupeRP == 32)
    new_Skin.CoupeRP = 1961044;
  if (ModSkin.CoupeRP == 33)
    new_Skin.CoupeRP = 1961045;
  if (ModSkin.CoupeRP == 34)
    new_Skin.CoupeRP = 1961046;
  if (ModSkin.CoupeRP == 35)
    new_Skin.CoupeRP = 1961050;
  if (ModSkin.CoupeRP == 36)
    new_Skin.CoupeRP = 1961051;
  if (ModSkin.CoupeRP == 37)
    new_Skin.CoupeRP = 1961052;
  if (ModSkin.CoupeRP == 38)
    new_Skin.CoupeRP = 1961053;
  if (ModSkin.CoupeRP == 39)
    new_Skin.CoupeRP = 1961054;
  if (ModSkin.CoupeRP == 40)
    new_Skin.CoupeRP = 1961055;
  if (ModSkin.CoupeRP == 41)
    new_Skin.CoupeRP = 1961056;
  if (ModSkin.CoupeRP == 42)
    new_Skin.CoupeRP = 1961057;

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  if (ModSkin.UAZ == 0)
    new_Skin.UAZ = 1908001;
  if (ModSkin.UAZ == 1)
    new_Skin.UAZ = 1908067;
  if (ModSkin.UAZ == 2)
    new_Skin.UAZ = 1908061;
  if (ModSkin.UAZ == 3)
    new_Skin.UAZ = 1908032;
  if (ModSkin.UAZ == 4)
    new_Skin.UAZ = 1908068;
  if (ModSkin.UAZ == 5)
    new_Skin.UAZ = 1908066;
  if (ModSkin.UAZ == 6)
    new_Skin.UAZ = 1908075;
  if (ModSkin.UAZ == 7)
    new_Skin.UAZ = 1908076;
  if (ModSkin.UAZ == 8)
    new_Skin.UAZ = 1908077;
  if (ModSkin.UAZ == 9)
    new_Skin.UAZ = 1908078;
  if (ModSkin.UAZ == 10)
    new_Skin.UAZ = 1908084;
  if (ModSkin.UAZ == 11)
    new_Skin.UAZ = 1908085;
  if (ModSkin.UAZ == 12)
    new_Skin.UAZ = 1908086;
  if (ModSkin.UAZ == 13)
    new_Skin.UAZ = 1908088;
  if (ModSkin.UAZ == 14)
    new_Skin.UAZ = 1908089;
  if (ModSkin.UAZ == 15)
    new_Skin.UAZ = 1908188;
  if (ModSkin.UAZ == 16)
    new_Skin.UAZ = 1908189;
}

std::set < std::string > loggedNames;
namespace CauserDeadBox {
  inline bool Active = false;
  inline std::string KillByWeaponID = "";
  inline int CurBulletNumInClipNew = 0;
  inline int CurBulletNumInClipLast = 0;
  inline UDeadBoxAvatarComponent * DeadBoxPointer = 0;
}

void * ( * oProcessEvent)(UObject * pObj, UFunction * pFunc, void * pArgs);
void * hkProcessEvent(UObject * pObj, UFunction * pFunc, void * pArgs) {
  auto LocalPlayer = m_LocalPlayer;
  //if (m_LocalPlayer) {
  if (ModSkin.Enable) {
    if (std::string(pFunc -> GetFullName().c_str()).find("CreateWeaponAndChangeSkin") != std::string::npos) {
      ULobbyWeaponManagerComponent_CreateWeaponAndChangeSkin_Params * PARAMS = (ULobbyWeaponManagerComponent_CreateWeaponAndChangeSkin_Params * ) pArgs;
      PARAMS -> bSync = false;
      PARAMS -> bUse = true;

      int g_WeaponID = PARAMS -> WeaponSkinID;
      if (g_WeaponID == 101001) {
        if (ModSkin.AKM >= 1)
          PARAMS -> WeaponSkinID = new_Skin.AKM;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (g_WeaponID == 101002) {
        if (ModSkin.M16A4 >= 1)
          PARAMS -> WeaponSkinID = new_Skin.M16A4;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (g_WeaponID == 101003) {
        if (ModSkin.Scar >= 1)
          PARAMS -> WeaponSkinID = new_Skin.Scar;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (g_WeaponID == 101004) {
        if (ModSkin.M416 >= 1)
          PARAMS -> WeaponSkinID = new_Skin.M416_1;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (g_WeaponID == 101005) {
        if (ModSkin.Groza >= 1)
          PARAMS -> WeaponSkinID = new_Skin.Groza;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (g_WeaponID == 101006) {
        if (ModSkin.AUG >= 1)
          PARAMS -> WeaponSkinID = new_Skin.AUG;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (g_WeaponID == 101007) {
        if (ModSkin.QBZ >= 1)
          PARAMS -> WeaponSkinID = new_Skin.QBZ;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (g_WeaponID == 101008) {
        if (ModSkin.M762 >= 1)
          PARAMS -> WeaponSkinID = new_Skin.M762;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (g_WeaponID == 101102) {
        if (ModSkin.ACE32 >= 1)
          PARAMS -> WeaponSkinID = new_Skin.ACE32;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (g_WeaponID == 101012) {
        if (ModSkin.Honey >= 1)
          PARAMS -> WeaponSkinID = new_Skin.Honey;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (g_WeaponID == 102001) {
        if (ModSkin.UZI >= 1)
          PARAMS -> WeaponSkinID = new_Skin.UZI;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (g_WeaponID == 102002) {
        if (ModSkin.UMP >= 1)
          PARAMS -> WeaponSkinID = new_Skin.UMP;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (g_WeaponID == 102003) {
        if (ModSkin.Vector >= 1)
          PARAMS -> WeaponSkinID = new_Skin.Vector;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (g_WeaponID == 102004) {
        if (ModSkin.Thompson >= 1)
          PARAMS -> WeaponSkinID = new_Skin.Thompson;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (g_WeaponID == 102005) {
        if (ModSkin.Bizon >= 1)
          PARAMS -> WeaponSkinID = new_Skin.Bizon;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (g_WeaponID == 103001) {
        if (ModSkin.K98 >= 1)
          PARAMS -> WeaponSkinID = new_Skin.K98;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (g_WeaponID == 103002) {
        if (ModSkin.M24 >= 1)
          PARAMS -> WeaponSkinID = new_Skin.M24;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (g_WeaponID == 103003) {
        if (ModSkin.AWM >= 1)
          PARAMS -> WeaponSkinID = new_Skin.AWM;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (g_WeaponID == 103005) {
        if (ModSkin.VSS >= 1)
          PARAMS -> WeaponSkinID = new_Skin.VSS;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (g_WeaponID == 103004) {
        if (ModSkin.SKS >= 1)
          PARAMS -> WeaponSkinID = new_Skin.SKS;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (g_WeaponID == 103006) {
        if (ModSkin.Mini14 >= 1)
          PARAMS -> WeaponSkinID = new_Skin.Mini14;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (g_WeaponID == 103007) {
        if (ModSkin.MK14 >= 1)
          PARAMS -> WeaponSkinID = new_Skin.MK14;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (g_WeaponID == 103009) {
        if (ModSkin.SLR >= 1)
          PARAMS -> WeaponSkinID = new_Skin.SLR;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (g_WeaponID == 103012) {
        if (ModSkin.AMR >= 1)
          PARAMS -> WeaponSkinID = new_Skin.AMR;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (g_WeaponID == 104002) {
        if (ModSkin.S1897 >= 1)
          PARAMS -> WeaponSkinID = new_Skin.S1897;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (g_WeaponID == 105002) {
        if (ModSkin.DP28 >= 1)
          PARAMS -> WeaponSkinID = new_Skin.DP28;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (g_WeaponID == 105001) {
        if (ModSkin.M249 >= 1)
          PARAMS -> WeaponSkinID = new_Skin.M249;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (g_WeaponID == 105010) {
        if (ModSkin.MG3 >= 1)
          PARAMS -> WeaponSkinID = new_Skin.MG3;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (g_WeaponID == 106008) {
        if (ModSkin.Skorpion >= 1)
          PARAMS -> WeaponSkinID = new_Skin.Skorpion;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (g_WeaponID == 106008) {
        if (ModSkin.Pan >= 1)
          PARAMS -> WeaponSkinID = new_Skin.Pan;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      LOGI("WeaponSkinID: %d", PARAMS -> WeaponSkinID);
    }

    if (std::string(pFunc -> GetFullName().c_str()).find("CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GetEquipmentSkinItemID") != std::string::npos) {
      UCharacterAvatarComponent2_GetEquipmentSkinItemID_Params * PARAMS = (UCharacterAvatarComponent2_GetEquipmentSkinItemID_Params * ) pArgs;
      LOGI("Balo %d", PARAMS -> InItemID);
      std::string strBaloId = std::to_string((int) PARAMS -> InItemID);
      if (PARAMS -> InItemID != new_Skin.XSuits && strstr(strBaloId.c_str(), "403001")) {
        PARAMS -> InItemID = new_Skin.XSuits;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (PARAMS -> InItemID != new_Skin.Balo1 && strstr(strBaloId.c_str(), "501001")) {
        PARAMS -> InItemID = new_Skin.Balo1;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (PARAMS -> InItemID != new_Skin.Balo2 && strstr(strBaloId.c_str(), "501002")) {
        PARAMS -> InItemID = new_Skin.Balo2;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (PARAMS -> InItemID != new_Skin.Balo3 && strstr(strBaloId.c_str(), "501003")) {
        PARAMS -> InItemID = new_Skin.Balo3;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (PARAMS -> InItemID != new_Skin.Balo4 && strstr(strBaloId.c_str(), "501004")) {
        PARAMS -> InItemID = new_Skin.Balo4;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (PARAMS -> InItemID != new_Skin.Balo5 && strstr(strBaloId.c_str(), "501005")) {
        PARAMS -> InItemID = new_Skin.Balo5;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (PARAMS -> InItemID != new_Skin.Balo6 && strstr(strBaloId.c_str(), "501006")) {
        PARAMS -> InItemID = new_Skin.Balo6;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
    } //Balo&Helmet

    if (ModSkin.DeadBox && std::string(pObj -> GetName().c_str()).find("DeadBoxAvatarComponent") != std::string::npos) {
      if (std::string(pFunc -> GetFullName().c_str()).find("GetLuaFilePath") !=
        std::string::npos && LocalPlayer) {
        auto DeadBoxPointer = (UDeadBoxAvatarComponent * ) pObj;
        if (LocalPlayer -> WeaponManagerComponent) {
          if (LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated) {
            CauserDeadBox::KillByWeaponID = std::to_string(
              (int) LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated -> GetWeaponID());
            CauserDeadBox::CurBulletNumInClipNew = ((ASTExtraShootWeapon * ) LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated) -> CurBulletInClip.CurBulletNumInClip;
            LOGI("Save WeaponKilled %d %s", CauserDeadBox::Active,
              CauserDeadBox::KillByWeaponID.c_str());
            LOGI("Save WeaponKilled %d %s", CauserDeadBox::Active,
              CauserDeadBox::KillByWeaponID.c_str());
          }
          int DeadBoxSkinId = 0;
          if (strstr(CauserDeadBox::KillByWeaponID.c_str(), "101001")) {
            if (ModSkin.AKM >= 1)
              DeadBoxSkinId = new_Skin.AKM;
          }

          if (strstr(CauserDeadBox::KillByWeaponID.c_str(), "101002")) {
            if (ModSkin.M16A4 >= 1)
              DeadBoxSkinId = new_Skin.M16A4;
          }

          if (strstr(CauserDeadBox::KillByWeaponID.c_str(), "101003")) {
            if (ModSkin.Scar >= 1)
              DeadBoxSkinId = new_Skin.Scar;
          }

          if (strstr(CauserDeadBox::KillByWeaponID.c_str(), "101004")) {
            if (ModSkin.M416 >= 1)
              DeadBoxSkinId = new_Skin.M416_1;
          }

          if (strstr(CauserDeadBox::KillByWeaponID.c_str(), "101005")) {
            if (ModSkin.Groza >= 1)
              DeadBoxSkinId = new_Skin.Groza;
          }
          if (strstr(CauserDeadBox::KillByWeaponID.c_str(), "101006")) {
            if (ModSkin.AUG >= 1)
              DeadBoxSkinId = new_Skin.AUG;
          }
          if (strstr(CauserDeadBox::KillByWeaponID.c_str(), "101007")) {
            if (ModSkin.QBZ >= 1)
              DeadBoxSkinId = new_Skin.QBZ;
          }
          if (strstr(CauserDeadBox::KillByWeaponID.c_str(), "101008")) {
            if (ModSkin.M762 >= 1)
              DeadBoxSkinId = new_Skin.M762;
          }
          if (strstr(CauserDeadBox::KillByWeaponID.c_str(), "101102")) {
            if (ModSkin.ACE32 >= 1)
              DeadBoxSkinId = new_Skin.ACE32;
          }
          if (strstr(CauserDeadBox::KillByWeaponID.c_str(), "101012")) {
            if (ModSkin.Honey >= 1)
              DeadBoxSkinId = new_Skin.Honey;
          }
          if (strstr(CauserDeadBox::KillByWeaponID.c_str(), "102001")) {
            if (ModSkin.UZI >= 1)
              DeadBoxSkinId = new_Skin.UZI;
          }
          if (strstr(CauserDeadBox::KillByWeaponID.c_str(), "102002")) {
            if (ModSkin.UMP >= 1)
              DeadBoxSkinId = new_Skin.UMP;
          }
          if (strstr(CauserDeadBox::KillByWeaponID.c_str(), "102003")) {
            if (ModSkin.Vector >= 1)
              DeadBoxSkinId = new_Skin.Vector;
          }
          if (strstr(CauserDeadBox::KillByWeaponID.c_str(), "102004")) {
            if (ModSkin.Thompson >= 1)
              DeadBoxSkinId = new_Skin.Thompson;
          }
          if (strstr(CauserDeadBox::KillByWeaponID.c_str(), "102005")) {
            if (ModSkin.Bizon >= 1)
              DeadBoxSkinId = new_Skin.Bizon;
          }
          if (strstr(CauserDeadBox::KillByWeaponID.c_str(), "103001")) {
            if (ModSkin.K98 >= 1)
              DeadBoxSkinId = new_Skin.K98;
          }
          if (strstr(CauserDeadBox::KillByWeaponID.c_str(), "103002")) {
            if (ModSkin.M24 >= 1)
              DeadBoxSkinId = new_Skin.M24;
          }
          if (strstr(CauserDeadBox::KillByWeaponID.c_str(), "103003")) {
            if (ModSkin.AWM >= 1)
              DeadBoxSkinId = new_Skin.AWM;
          }
          if (strstr(CauserDeadBox::KillByWeaponID.c_str(), "103005")) {
            if (ModSkin.VSS >= 1)
              DeadBoxSkinId = new_Skin.VSS;
          }
          if (strstr(CauserDeadBox::KillByWeaponID.c_str(), "103004")) {
            if (ModSkin.SKS >= 1)
              DeadBoxSkinId = new_Skin.SKS;
          }
          if (strstr(CauserDeadBox::KillByWeaponID.c_str(), "103006")) {
            if (ModSkin.Mini14 >= 1)
              DeadBoxSkinId = new_Skin.Mini14;
          }
          if (strstr(CauserDeadBox::KillByWeaponID.c_str(), "103007")) {
            if (ModSkin.MK14 >= 1)
              DeadBoxSkinId = new_Skin.MK14;
          }
          if (strstr(CauserDeadBox::KillByWeaponID.c_str(), "103009")) {
            if (ModSkin.SLR >= 1)
              DeadBoxSkinId = new_Skin.SLR;
          }
          if (strstr(CauserDeadBox::KillByWeaponID.c_str(), "103012")) {
            if (ModSkin.AMR >= 1)
              DeadBoxSkinId = new_Skin.AMR;
          }
          if (strstr(CauserDeadBox::KillByWeaponID.c_str(), "104002")) {
            if (ModSkin.S1897 >= 1)
              DeadBoxSkinId = new_Skin.S1897;
          }
          if (strstr(CauserDeadBox::KillByWeaponID.c_str(), "105002")) {
            if (ModSkin.DP28 >= 1)
              DeadBoxSkinId = new_Skin.DP28;
          }
          if (strstr(CauserDeadBox::KillByWeaponID.c_str(), "105001")) {
            if (ModSkin.M249 >= 1)
              DeadBoxSkinId = new_Skin.M249;
          }
          if (strstr(CauserDeadBox::KillByWeaponID.c_str(), "105010")) {
            if (ModSkin.MG3 >= 1)
              DeadBoxSkinId = new_Skin.MG3;
          }
          if (strstr(CauserDeadBox::KillByWeaponID.c_str(), "106008")) {
            if (ModSkin.Skorpion >= 1)
              DeadBoxSkinId = new_Skin.Skorpion;
          }
          if (strstr(CauserDeadBox::KillByWeaponID.c_str(), "108004")) {
            if (ModSkin.Pan >= 1)
              DeadBoxSkinId = new_Skin.Pan;
          }

          DeadBoxPointer -> ChangeItemAvatar(DeadBoxSkinId, true);
        }
        return oProcessEvent(pObj, pFunc, pArgs);
      }
    }

    if (std::string(pFunc -> GetFullName().c_str()).find("BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.CreateBattleItemHandle") != std::string::npos && LocalPlayer) {
      UBackpackUtils_CreateBattleItemHandle_Params * PARAMS = (UBackpackUtils_CreateBattleItemHandle_Params * ) pArgs;
      switch (PARAMS -> DefineID.TypeSpecificID) {
      case 703001: { // 403003
        PARAMS -> DefineID.TypeSpecificID = new_Skin.Parachute;
        return oProcessEvent(pObj, pFunc, pArgs);
      };
      //case 4151001: {// 403003
      //    PARAMS->DefineID.TypeSpecificID = 4151059;
      //    return oProcessEvent(pObj, pFunc, pArgs);
      //    };
      //case 2001001: {// 403003
      //    PARAMS->DefineID.TypeSpecificID = 2002935;
      //    return oProcessEvent(pObj, pFunc, pArgs);
      //    };
      //case 61300001: {// 403003
      //    PARAMS->DefineID.TypeSpecificID = 61300005;
      //    return oProcessEvent(pObj, pFunc, pArgs);
      //    };
      //case 61400001: {// 403003
      //    PARAMS->DefineID.TypeSpecificID = 61400005;
      //    return oProcessEvent(pObj, pFunc, pArgs);
      //    };
      //case 61510000: {// 403003
      //    PARAMS->DefineID.TypeSpecificID = 61510001;
      //    return oProcessEvent(pObj, pFunc, pArgs);
      //    };
      //case 61200001: {// 403003
      //    PARAMS->DefineID.TypeSpecificID = 61200021;
      //    return oProcessEvent(pObj, pFunc, pArgs);
      //    };
      //case 61100001: {// 403003
      //    PARAMS->DefineID.TypeSpecificID = 61100025;
      //    return oProcessEvent(pObj, pFunc, pArgs);
      //    };
      //case 61010001: {// 403003
      //    PARAMS->DefineID.TypeSpecificID = 61010014;
      //    return oProcessEvent(pObj, pFunc, pArgs);
      //    };
      }

      std::string AvatarIDStr = std::to_string((int) PARAMS -> DefineID.TypeSpecificID);

      if (PARAMS -> DefineID.TypeSpecificID != new_Skin.XSuits &&
        strstr(AvatarIDStr.c_str(), "403001")) {
        PARAMS -> DefineID.TypeSpecificID = new_Skin.XSuits;
        return oProcessEvent(pObj, pFunc, pArgs);
      }

      //if (strstr(AvatarIDStr.c_str(), "2001001")) {
      //    if (ModSkin.AKM >= 1)
      //        PARAMS->DefineID.TypeSpecificID = 2002935;
      //    return oProcessEvent(pObj, pFunc, pArgs);
      //}

      if (PARAMS -> DefineID.TypeSpecificID != new_Skin.Balo1 &&
        strstr(AvatarIDStr.c_str(), "501001")) {
        PARAMS -> DefineID.TypeSpecificID = new_Skin.Balo1;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (PARAMS -> DefineID.TypeSpecificID != new_Skin.Balo2 &&
        strstr(AvatarIDStr.c_str(), "501002")) {
        PARAMS -> DefineID.TypeSpecificID = new_Skin.Balo2;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (PARAMS -> DefineID.TypeSpecificID != new_Skin.Balo3 &&
        strstr(AvatarIDStr.c_str(), "501003")) {
        PARAMS -> DefineID.TypeSpecificID = new_Skin.Balo3;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (PARAMS -> DefineID.TypeSpecificID != new_Skin.Balo4 &&
        strstr(AvatarIDStr.c_str(), "501004")) {
        PARAMS -> DefineID.TypeSpecificID = new_Skin.Balo4;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (PARAMS -> DefineID.TypeSpecificID != new_Skin.Balo5 &&
        strstr(AvatarIDStr.c_str(), "501005")) {
        PARAMS -> DefineID.TypeSpecificID = new_Skin.Balo5;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (PARAMS -> DefineID.TypeSpecificID != new_Skin.Balo6 &&
        strstr(AvatarIDStr.c_str(), "501006")) {
        PARAMS -> DefineID.TypeSpecificID = new_Skin.Balo6;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (PARAMS -> DefineID.TypeSpecificID != new_Skin.Helmet1 &&
        strstr(AvatarIDStr.c_str(), "502001")) {
        PARAMS -> DefineID.TypeSpecificID = new_Skin.Helmet1;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (PARAMS -> DefineID.TypeSpecificID != new_Skin.Helmet2 &&
        strstr(AvatarIDStr.c_str(), "502002")) {
        PARAMS -> DefineID.TypeSpecificID = new_Skin.Helmet2;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (PARAMS -> DefineID.TypeSpecificID != new_Skin.Helmet3 &&
        strstr(AvatarIDStr.c_str(), "502003")) {
        PARAMS -> DefineID.TypeSpecificID = new_Skin.Helmet3;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (PARAMS -> DefineID.TypeSpecificID != new_Skin.Helmet4 &&
        strstr(AvatarIDStr.c_str(), "502004")) {
        PARAMS -> DefineID.TypeSpecificID = new_Skin.Helmet4;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (PARAMS -> DefineID.TypeSpecificID != new_Skin.Helmet5 &&
        strstr(AvatarIDStr.c_str(), "502005")) {
        PARAMS -> DefineID.TypeSpecificID = new_Skin.Helmet5;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (PARAMS -> DefineID.TypeSpecificID != new_Skin.Helmet6 &&
        strstr(AvatarIDStr.c_str(), "502114")) {
        PARAMS -> DefineID.TypeSpecificID = new_Skin.Helmet6;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (PARAMS -> DefineID.TypeSpecificID != new_Skin.Helmet7 &&
        strstr(AvatarIDStr.c_str(), "502115")) {
        PARAMS -> DefineID.TypeSpecificID = new_Skin.Helmet7;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (PARAMS -> DefineID.TypeSpecificID != new_Skin.Helmet8 &&
        strstr(AvatarIDStr.c_str(), "502116")) {
        PARAMS -> DefineID.TypeSpecificID = new_Skin.Helmet8;
        return oProcessEvent(pObj, pFunc, pArgs);
      }

      if (strstr(AvatarIDStr.c_str(), "101001")) {
        if (ModSkin.AKM >= 1)
          PARAMS -> DefineID.TypeSpecificID = new_Skin.AKM;
        return oProcessEvent(pObj, pFunc, pArgs);
      }

      if (strstr(AvatarIDStr.c_str(), "291001")) {
        if (LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated) {
          std::string AvatarWeaponID = std::to_string((int) LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated -> GetWeaponID());
          if (strstr(AvatarWeaponID.c_str(), "101001")) {
            PARAMS -> DefineID.TypeSpecificID = new_Skin.AKM_Mag;
          }
        }
      }
      /*if (strstr(AvatarIDStr.c_str(), "203001"))
      {
          if (LocalPlayer->WeaponManagerComponent->CurrentWeaponReplicated)
          {
              std::string AvatarWeaponID = std::to_string((int) LocalPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponID());
              if (strstr(AvatarWeaponID.c_str(), "101001"))
              {
                  PARAMS->DefineID.TypeSpecificID = 1010012137;
              }
          }
      }*/

      if (strstr(AvatarIDStr.c_str(), "101002")) {
        if (ModSkin.M16A4 >= 1)
          PARAMS -> DefineID.TypeSpecificID = new_Skin.M16A4;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (strstr(AvatarIDStr.c_str(), "291002")) {
        if (LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated) {
          std::string AvatarWeaponID = std::to_string((int) LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated -> GetWeaponID());
          if (strstr(AvatarWeaponID.c_str(), "101002")) {
            PARAMS -> DefineID.TypeSpecificID = new_Skin.M16A4_Mag;
          }
        }
      }
      //if (strstr(AvatarIDStr.c_str(), "205007"))
      //{
      //    if (LocalPlayer->WeaponManagerComponent->CurrentWeaponReplicated)
      //    {
      //        std::string AvatarWeaponID = std::to_string((int) LocalPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponID());
      //        if (strstr(AvatarWeaponID.c_str(), "101002"))
      //        {
      //            PARAMS->DefineID.TypeSpecificID = new_Skin.M16A4_Stock;
      //        }
      //    }
      //}

      if (strstr(AvatarIDStr.c_str(), "101003")) {
        if (ModSkin.Scar >= 1)
          PARAMS -> DefineID.TypeSpecificID = new_Skin.Scar;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (strstr(AvatarIDStr.c_str(), "291003")) {
        if (LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated) {
          std::string AvatarWeaponID = std::to_string((int) LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated -> GetWeaponID());
          if (strstr(AvatarWeaponID.c_str(), "101003")) {
            PARAMS -> DefineID.TypeSpecificID = new_Skin.Scar_Mag;
          }
        }
      }

      LOGI("SkinID %d", PARAMS -> DefineID.TypeSpecificID);
      if (strstr(AvatarIDStr.c_str(), "101004")) {
        if (ModSkin.M416 >= 1)
          PARAMS -> DefineID.TypeSpecificID = new_Skin.M416_1;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (strstr(AvatarIDStr.c_str(), "291004")) {
        if (ModSkin.M416 >= 1)
          PARAMS -> DefineID.TypeSpecificID = new_Skin.M416_2;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (strstr(AvatarIDStr.c_str(), "203008")) {
        if (ModSkin.M416 >= 1)
          PARAMS -> DefineID.TypeSpecificID = new_Skin.M416_3;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (strstr(AvatarIDStr.c_str(), "205005")) {
        if (ModSkin.M416 >= 1)
          PARAMS -> DefineID.TypeSpecificID = new_Skin.M416_4;
        return oProcessEvent(pObj, pFunc, pArgs);
      }

      if (strstr(AvatarIDStr.c_str(), "201010")) {
        if (LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated) {
          std::string AvatarWeaponID = std::to_string((int) LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated -> GetWeaponID());
          if (strstr(AvatarWeaponID.c_str(), "101004")) {
            PARAMS -> DefineID.TypeSpecificID = new_Skin.M416_flash;
          }
        }
      }
      if (strstr(AvatarIDStr.c_str(), "201009")) {
        if (LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated) {
          std::string AvatarWeaponID = std::to_string((int) LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated -> GetWeaponID());
          if (strstr(AvatarWeaponID.c_str(), "101004")) {
            PARAMS -> DefineID.TypeSpecificID = new_Skin.M416_compe;
          }
        }
      }
      if (strstr(AvatarIDStr.c_str(), "201011")) {
        if (LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated) {
          std::string AvatarWeaponID = std::to_string((int) LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated -> GetWeaponID());
          if (strstr(AvatarWeaponID.c_str(), "101004")) {
            PARAMS -> DefineID.TypeSpecificID = new_Skin.M416_silent;
          }
        }
      }
      if (strstr(AvatarIDStr.c_str(), "203001")) {
        if (LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated) {
          std::string AvatarWeaponID = std::to_string((int) LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated -> GetWeaponID());
          if (strstr(AvatarWeaponID.c_str(), "101004")) {
            PARAMS -> DefineID.TypeSpecificID = new_Skin.M416_reddot;
          }
        }
      }
      if (strstr(AvatarIDStr.c_str(), "203002")) {
        if (LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated) {
          std::string AvatarWeaponID = std::to_string((int) LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated -> GetWeaponID());
          if (strstr(AvatarWeaponID.c_str(), "101004")) {
            PARAMS -> DefineID.TypeSpecificID = new_Skin.M416_holo;
          }
        }
      }
      if (strstr(AvatarIDStr.c_str(), "203003")) {
        if (LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated) {
          std::string AvatarWeaponID = std::to_string((int) LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated -> GetWeaponID());
          if (strstr(AvatarWeaponID.c_str(), "101004")) {
            PARAMS -> DefineID.TypeSpecificID = new_Skin.M416_x2;
          }
        }
      }
      if (strstr(AvatarIDStr.c_str(), "203014")) {
        if (LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated) {
          std::string AvatarWeaponID = std::to_string((int) LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated -> GetWeaponID());
          if (strstr(AvatarWeaponID.c_str(), "101004")) {
            PARAMS -> DefineID.TypeSpecificID = new_Skin.M416_x3;
          }
        }
      }
      if (strstr(AvatarIDStr.c_str(), "203004")) {
        if (LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated) {
          std::string AvatarWeaponID = std::to_string((int) LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated -> GetWeaponID());
          if (strstr(AvatarWeaponID.c_str(), "101004")) {
            PARAMS -> DefineID.TypeSpecificID = new_Skin.M416_x4;
          }
        }
      }
      if (strstr(AvatarIDStr.c_str(), "203015")) {
        if (LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated) {
          std::string AvatarWeaponID = std::to_string((int) LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated -> GetWeaponID());
          if (strstr(AvatarWeaponID.c_str(), "101004")) {
            PARAMS -> DefineID.TypeSpecificID = new_Skin.M416_x6;
          }
        }
      }

      if (strstr(AvatarIDStr.c_str(), "204012")) {
        if (LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated) {
          std::string AvatarWeaponID = std::to_string((int) LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated -> GetWeaponID());
          if (strstr(AvatarWeaponID.c_str(), "101004")) {
            PARAMS -> DefineID.TypeSpecificID = new_Skin.M416_extendedMag;
          }
        }
      }
      if (strstr(AvatarIDStr.c_str(), "204011")) {
        if (LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated) {
          std::string AvatarWeaponID = std::to_string((int) LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated -> GetWeaponID());
          if (strstr(AvatarWeaponID.c_str(), "101004")) {
            PARAMS -> DefineID.TypeSpecificID = new_Skin.M416_quickMag;
          }
        }
      }
      if (strstr(AvatarIDStr.c_str(), "204013")) {
        if (LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated) {
          std::string AvatarWeaponID = std::to_string((int) LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated -> GetWeaponID());
          if (strstr(AvatarWeaponID.c_str(), "101004")) {
            PARAMS -> DefineID.TypeSpecificID = new_Skin.M416_quickNextended;
          }
        }
      }
      if (strstr(AvatarIDStr.c_str(), "205002")) {
        if (LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated) {
          std::string AvatarWeaponID = std::to_string((int) LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated -> GetWeaponID());
          if (strstr(AvatarWeaponID.c_str(), "101004")) {
            PARAMS -> DefineID.TypeSpecificID = new_Skin.M416_stock;
          }
        }
      }
      //if (strstr(AvatarIDStr.c_str(), "203015"))
      //{
      //    if (LocalPlayer->WeaponManagerComponent->CurrentWeaponReplicated)
      //    {
      //        std::string AvatarWeaponID = std::to_string((int)LocalPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponID());
      //        if (strstr(AvatarWeaponID.c_str(), "101004"))
      //        {
      //            PARAMS->DefineID.TypeSpecificID = new_Skin.M416_verical;
      //        }
      //    }
      //}
      if (strstr(AvatarIDStr.c_str(), "202001")) {
        if (LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated) {
          std::string AvatarWeaponID = std::to_string((int) LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated -> GetWeaponID());
          if (strstr(AvatarWeaponID.c_str(), "101004")) {
            PARAMS -> DefineID.TypeSpecificID = new_Skin.M416_angle;
          }
        }
      }
      if (strstr(AvatarIDStr.c_str(), "202004")) {
        if (LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated) {
          std::string AvatarWeaponID = std::to_string((int) LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated -> GetWeaponID());
          if (strstr(AvatarWeaponID.c_str(), "101004")) {
            PARAMS -> DefineID.TypeSpecificID = new_Skin.M416_lightgrip;
          }
        }
      }
      if (strstr(AvatarIDStr.c_str(), "202005")) {
        if (LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated) {
          std::string AvatarWeaponID = std::to_string((int) LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated -> GetWeaponID());
          if (strstr(AvatarWeaponID.c_str(), "101004")) {
            PARAMS -> DefineID.TypeSpecificID = new_Skin.M416_pink;
          }
        }
      }
      if (strstr(AvatarIDStr.c_str(), "202007")) {
        if (LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated) {
          std::string AvatarWeaponID = std::to_string((int) LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated -> GetWeaponID());
          if (strstr(AvatarWeaponID.c_str(), "101004")) {
            PARAMS -> DefineID.TypeSpecificID = new_Skin.M416_lazer;
          }
        }
      }
      if (strstr(AvatarIDStr.c_str(), "202006")) {
        if (LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated) {
          std::string AvatarWeaponID = std::to_string((int) LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated -> GetWeaponID());
          if (strstr(AvatarWeaponID.c_str(), "101004")) {
            PARAMS -> DefineID.TypeSpecificID = new_Skin.M416_thumb;
          }
        }
      }

      if (strstr(AvatarIDStr.c_str(), "101005")) {
        if (ModSkin.Groza >= 1)
          PARAMS -> DefineID.TypeSpecificID = new_Skin.Groza;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (strstr(AvatarIDStr.c_str(), "101006")) {
        if (ModSkin.AUG >= 1)
          PARAMS -> DefineID.TypeSpecificID = new_Skin.AUG;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (strstr(AvatarIDStr.c_str(), "101007")) {
        if (ModSkin.QBZ >= 1)
          PARAMS -> DefineID.TypeSpecificID = new_Skin.QBZ;
        return oProcessEvent(pObj, pFunc, pArgs);
      }

      if (strstr(AvatarIDStr.c_str(), "101008")) {
        if (ModSkin.M762 >= 1)
          PARAMS -> DefineID.TypeSpecificID = new_Skin.M762;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (strstr(AvatarIDStr.c_str(), "291008")) {
        if (LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated) {
          std::string AvatarWeaponID = std::to_string((int) LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated -> GetWeaponID());
          if (strstr(AvatarWeaponID.c_str(), "101008")) {
            PARAMS -> DefineID.TypeSpecificID = new_Skin.M762_Mag;
          }
        }
      }

      if (strstr(AvatarIDStr.c_str(), "101102")) {
        if (ModSkin.ACE32 >= 1)
          PARAMS -> DefineID.TypeSpecificID = new_Skin.ACE32;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (strstr(AvatarIDStr.c_str(), "101012")) {
        if (ModSkin.Honey >= 1)
          PARAMS -> DefineID.TypeSpecificID = new_Skin.Honey;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (strstr(AvatarIDStr.c_str(), "102001")) {
        if (ModSkin.UZI >= 1)
          PARAMS -> DefineID.TypeSpecificID = new_Skin.UZI;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (strstr(AvatarIDStr.c_str(), "102002")) {
        if (ModSkin.UMP >= 1)
          PARAMS -> DefineID.TypeSpecificID = new_Skin.UMP;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (strstr(AvatarIDStr.c_str(), "102003")) {
        if (ModSkin.Vector >= 1)
          PARAMS -> DefineID.TypeSpecificID = new_Skin.Vector;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (strstr(AvatarIDStr.c_str(), "102004")) {
        if (ModSkin.Thompson >= 1)
          PARAMS -> DefineID.TypeSpecificID = new_Skin.Thompson;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (strstr(AvatarIDStr.c_str(), "102005")) {
        if (ModSkin.Bizon >= 1)
          PARAMS -> DefineID.TypeSpecificID = new_Skin.Bizon;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (strstr(AvatarIDStr.c_str(), "103001")) {
        if (ModSkin.K98 >= 1)
          PARAMS -> DefineID.TypeSpecificID = new_Skin.K98;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (strstr(AvatarIDStr.c_str(), "103002")) {
        if (ModSkin.M24 >= 1)
          PARAMS -> DefineID.TypeSpecificID = new_Skin.M24;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (strstr(AvatarIDStr.c_str(), "103003")) {
        if (ModSkin.AWM >= 1)
          PARAMS -> DefineID.TypeSpecificID = new_Skin.AWM;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (strstr(AvatarIDStr.c_str(), "103005")) {
        if (ModSkin.VSS >= 1)
          PARAMS -> DefineID.TypeSpecificID = new_Skin.VSS;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (strstr(AvatarIDStr.c_str(), "103004")) {
        if (ModSkin.SKS >= 1)
          PARAMS -> DefineID.TypeSpecificID = new_Skin.SKS;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (strstr(AvatarIDStr.c_str(), "103006")) {
        if (ModSkin.Mini14 >= 1)
          PARAMS -> DefineID.TypeSpecificID = new_Skin.Mini14;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (strstr(AvatarIDStr.c_str(), "103007")) {
        if (ModSkin.MK14 >= 1)
          PARAMS -> DefineID.TypeSpecificID = new_Skin.MK14;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (strstr(AvatarIDStr.c_str(), "103009")) {
        if (ModSkin.SLR >= 1)
          PARAMS -> DefineID.TypeSpecificID = new_Skin.SLR;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (strstr(AvatarIDStr.c_str(), "103012")) {
        if (ModSkin.AMR >= 1)
          PARAMS -> DefineID.TypeSpecificID = new_Skin.AMR;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (strstr(AvatarIDStr.c_str(), "104002")) {
        if (ModSkin.S1897 >= 1)
          PARAMS -> DefineID.TypeSpecificID = new_Skin.S1897;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (strstr(AvatarIDStr.c_str(), "105002")) {
        if (ModSkin.DP28 >= 1)
          PARAMS -> DefineID.TypeSpecificID = new_Skin.DP28;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (strstr(AvatarIDStr.c_str(), "105001")) {
        if (ModSkin.M249 >= 1)
          PARAMS -> DefineID.TypeSpecificID = new_Skin.M249;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (strstr(AvatarIDStr.c_str(), "105010")) {
        if (ModSkin.MG3 >= 1)
          PARAMS -> DefineID.TypeSpecificID = new_Skin.MG3;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (strstr(AvatarIDStr.c_str(), "106008")) {
        if (ModSkin.Skorpion >= 1)
          PARAMS -> DefineID.TypeSpecificID = new_Skin.Skorpion;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
      if (strstr(AvatarIDStr.c_str(), "108004")) {
        if (ModSkin.Pan >= 1)
          PARAMS -> DefineID.TypeSpecificID = new_Skin.Pan;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
    }

    if (std::string(pFunc -> GetFullName().c_str()).find("VehicleAvatarComponent_BP.VehicleAvatarComponent_BP_C.GetItemAvatarHandle") !=
      std::string::npos) {
      if (detectLobby == 1) {
        UVehicleAvatarComponent_GetItemAvatarHandle_Params * PARAMS = (UVehicleAvatarComponent_GetItemAvatarHandle_Params * ) pArgs;
        std::string SkinIDStr = std::to_string((int) PARAMS -> ItemId);
        if (strstr(SkinIDStr.c_str(), "1901"))
          PARAMS -> ItemId = new_Skin.Moto;
        if (strstr(SkinIDStr.c_str(), "1903"))
          PARAMS -> ItemId = new_Skin.Dacia;
        if (strstr(SkinIDStr.c_str(), "1961"))
          PARAMS -> ItemId = new_Skin.CoupeRP;
        if (strstr(SkinIDStr.c_str(), "1908"))
          PARAMS -> ItemId = new_Skin.UAZ;
        return oProcessEvent(pObj, pFunc, pArgs);
      }
    } //Vehicle Game

    // الرقصات اللوبي
    /*if (std::string(pFunc->GetFullName().c_str()).find("BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetEmoteHandle") != std::string::npos)
    {
        ULobbyPlayEmoteComponent_GetEmoteHandle_Params *PARAMS = ( ULobbyPlayEmoteComponent_GetEmoteHandle_Params * ) pArgs;
        LOGI("EmoteLobby %d", PARAMS->ItemId);
        if (PARAMS->ItemId == 2200101)
            PARAMS->ItemId = 2201001;
        if (PARAMS->ItemId == 2200301)
            PARAMS->ItemId = 2201001;
    }

    if (std::string(pFunc->GetFullName().c_str()).find("BP_PlayerPawn.BP_PlayerPawn_C.GetEmoteHandle") != std::string::npos)
    {
        UCharacterPlayEmoteComponent_GetEmoteHandle_Params *PARAMS = ( UCharacterPlayEmoteComponent_GetEmoteHandle_Params * ) pArgs;
        LOGI("EmoteGame %d", PARAMS->ItemId);
        if (PARAMS->ItemId == 2200101)
            PARAMS->ItemId = 2201001;
        if (PARAMS->ItemId == 2200301)
            PARAMS->ItemId = 2201001;
    }*/

    if (loggedNames.find(pFunc -> GetFullName()) == loggedNames.end()) {
      // Log to file.
      //LOGI("class: %s | %s", pObj->GetName().c_str(), pFunc->GetFullName().c_str());
      // LOGI("class: %s | %s", pObj->GetName().c_str(), pFunc->GetFullName().c_str());
      // Add the full name to the set to mark it as logged.
      loggedNames.insert(pFunc -> GetFullName());
    }
  }
  // }
  return oProcessEvent(pObj, pFunc, pArgs);
}

std::vector < uintptr_t > listHitDame;

int( * HitDame)(int a1, int a2, int a3);
int hHitDame(int a1, int a2, int a3) {
  //encLog("CALL Effect | %p | %p | %p", a1, a2, a3);
  if (m_LocalPlayer && detectGame == 1) {
    char addressStr[20];
    uintptr_t BaseHitDame;

    sprintf(addressStr, "%p", a2 - 0x18);
    sscanf(addressStr, "%"
      SCNxPTR, & BaseHitDame);

    listHitDame.push_back(BaseHitDame);
  }
  return HitDame(a1, a2, a3);
}

namespace Active {
  inline int SkinCarDefault = 0;
  inline int SkinCarMod = 0;
  inline int SkinCarNew = 0;
}

void * threadMod(void * ) {
  sleep(5);
  GetGName_GUObject();
  sleep(5);
  while (!FName::GNames)
    sleep(1);

  while (!UObject::GUObjectArray)
    sleep(1);

  int loopCount = 0;
  int timesleep = 17;
  auto startTime = std::chrono::high_resolution_clock::now();
  while (true) {
    std::this_thread::sleep_for(std::chrono::milliseconds(timesleep)); //~40/1s
    //auto time1 = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();

    updateSkin();

    detectLobby = * (int * )(libUE4Base + 0x8D7681C);
    detectGame = * (int * )(libUE4Base + 0x8D74524);

    std::chrono::time_point < std::chrono::high_resolution_clock > currentTime = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast < std::chrono::milliseconds > (currentTime - startTime).count();

    //encLog("%zu | %zu", sizeof(currentTime), sizeof(duration));

    if (duration >= 1000) {
      if (loopCount >= 15)
        ++timesleep;
      else

      --timesleep;

      //LOGI("loopCount = %d ~%0.3f", loopCount, (float)duration);
      startTime = std::chrono::high_resolution_clock::now();
      loopCount = 0;
    }

    ++loopCount;

    m_LocalController = 0;
    m_LocalPlayer = 0;
    ////////////////////////////////////////////
    std::vector < AActor * > g_Actors = getActors();

    for (int i = 0; i < g_Actors.size(); i++) {
      if (isObjectInvalid(g_Actors[i]))
        continue;

      if (g_Actors[i] -> IsA(ASTExtraPlayerController::StaticClass())) {
        m_LocalController = (ASTExtraPlayerController * ) g_Actors[i];
        //LOGI("LocalController Addr: %p", Actors.LocalController);
        break;
      }
    }

    if (m_LocalController != NULL) {
      for (int i = 0; i < g_Actors.size(); i++) {
        if (isObjectInvalid(g_Actors[i]))
          continue;

        if (g_Actors[i] -> IsA(ASTExtraPlayerCharacter::StaticClass())) {
          if (((ASTExtraPlayerCharacter * ) g_Actors[i]) -> PlayerKey ==
            m_LocalController -> PlayerKey) {
            m_LocalPlayer = (ASTExtraPlayerCharacter * ) g_Actors[i];
            ////////LOGI("LocalPlayer Addr: %p", Actors.LocalPlayer);
            break;
          }
        }
      }
    }

    if (m_LocalPlayer) {

      if (m_LocalPlayer -> AvatarComponent2) {
        auto AvatarComp = m_LocalPlayer -> AvatarComponent2;
        FNetAvatarSyncData NetAvatarComp = * (FNetAvatarSyncData * )((uintptr_t) AvatarComp + 0x2A0);
        auto Slotsybc = NetAvatarComp.SlotSyncData;

        Slotsybc[5].ItemId = new_Skin.XSuits;
      }

      if (m_LocalPlayer -> CurrentVehicle) {
        if (m_LocalPlayer -> CurrentVehicle -> VehicleAvatar) {
          std::string SkinIDStr = std::to_string((int) m_LocalPlayer -> CurrentVehicle -> VehicleAvatar -> GetDefaultAvatarID());
          Active::SkinCarDefault = m_LocalPlayer -> CurrentVehicle -> GetAvatarId();

          if (strstr(SkinIDStr.c_str(), "1901")) {
            Active::SkinCarMod = new_Skin.Moto;
            Active::SkinCarNew = true;
          } else if (strstr(SkinIDStr.c_str(), "1903")) {
            Active::SkinCarMod = new_Skin.Dacia;
            Active::SkinCarNew = true;
          } else if (strstr(SkinIDStr.c_str(), "1961")) {
            Active::SkinCarMod = new_Skin.CoupeRP;
            Active::SkinCarNew = true;
          } else if (strstr(SkinIDStr.c_str(), "1908")) {
            Active::SkinCarMod = new_Skin.UAZ;
            Active::SkinCarNew = true;
          } else Active::SkinCarNew = false;

          if (Active::SkinCarDefault != Active::SkinCarMod && Active::SkinCarNew) {
            LOGI("AVATAR ID %d %d", Active::SkinCarDefault, Active::SkinCarMod);
            m_LocalPlayer -> CurrentVehicle -> VehicleAvatar -> ChangeItemAvatar(Active::SkinCarMod, true);
          }
        }
      }
    }

    if (ModSkin.HitEffect && listHitDame.size() > 0 && detectGame == 1) {
      for (int i = 0; i < listHitDame.size(); i++) {
        if ( * (int * ) listHitDame[i] > 0) {
          if ( * (int * ) listHitDame[i] == 101001)
            *
            (int * ) listHitDame[i] = new_Skin.AKM;
          else if ( * (int * ) listHitDame[i] == 101002)
            *
            (int * ) listHitDame[i] = new_Skin.AKM;
          else if ( * (int * ) listHitDame[i] == 101003)
            *
            (int * ) listHitDame[i] = new_Skin.Scar;
          else if ( * (int * ) listHitDame[i] == 101004)
            *
            (int * ) listHitDame[i] = new_Skin.M416_1;
          else if ( * (int * ) listHitDame[i] == 101005)
            *
            (int * ) listHitDame[i] = new_Skin.Groza;
          else if ( * (int * ) listHitDame[i] == 101006)
            *
            (int * ) listHitDame[i] = new_Skin.AUG;
          else if ( * (int * ) listHitDame[i] == 101007)
            *
            (int * ) listHitDame[i] = new_Skin.QBZ;
          else if ( * (int * ) listHitDame[i] == 101008)
            *
            (int * ) listHitDame[i] = new_Skin.M762;
          else if ( * (int * ) listHitDame[i] == 101102)
            *
            (int * ) listHitDame[i] = new_Skin.ACE32;
          else if ( * (int * ) listHitDame[i] == 101102)
            *
            (int * ) listHitDame[i] = new_Skin.Honey;
          else if ( * (int * ) listHitDame[i] == 102001)
            *
            (int * ) listHitDame[i] = new_Skin.UZI;
          else if ( * (int * ) listHitDame[i] == 102002)
            *
            (int * ) listHitDame[i] = new_Skin.UMP;
          else if ( * (int * ) listHitDame[i] == 102003)
            *
            (int * ) listHitDame[i] = new_Skin.Vector;
          else if ( * (int * ) listHitDame[i] == 102004)
            *
            (int * ) listHitDame[i] = new_Skin.Thompson;
          else if ( * (int * ) listHitDame[i] == 102005)
            *
            (int * ) listHitDame[i] = new_Skin.Bizon;
          else if ( * (int * ) listHitDame[i] == 103001)
            *
            (int * ) listHitDame[i] = new_Skin.K98;
          else if ( * (int * ) listHitDame[i] == 103002)
            *
            (int * ) listHitDame[i] = new_Skin.M24;
          else if ( * (int * ) listHitDame[i] == 103003)
            *
            (int * ) listHitDame[i] = new_Skin.AWM;
          else if ( * (int * ) listHitDame[i] == 103012)
            *
            (int * ) listHitDame[i] = new_Skin.AMR;
          else if ( * (int * ) listHitDame[i] == 101005)
            *
            (int * ) listHitDame[i] = new_Skin.VSS;
          else if ( * (int * ) listHitDame[i] == 103004)
            *
            (int * ) listHitDame[i] = new_Skin.SKS;
          else if ( * (int * ) listHitDame[i] == 103006)
            *
            (int * ) listHitDame[i] = new_Skin.Mini14;
          else if ( * (int * ) listHitDame[i] == 103007)
            *
            (int * ) listHitDame[i] = new_Skin.MK14;
          else if ( * (int * ) listHitDame[i] == 103009)
            *
            (int * ) listHitDame[i] = new_Skin.SLR;
          else if ( * (int * ) listHitDame[i] == 104002)
            *
            (int * ) listHitDame[i] = new_Skin.S1897;
          else if ( * (int * ) listHitDame[i] == 105002)
            *
            (int * ) listHitDame[i] = new_Skin.DP28;
          else if ( * (int * ) listHitDame[i] == 105001)
            *
            (int * ) listHitDame[i] = new_Skin.M249;
          else if ( * (int * ) listHitDame[i] == 105010)
            *
            (int * ) listHitDame[i] = new_Skin.MG3;
          else if ( * (int * ) listHitDame[i] == 106008)
            *
            (int * ) listHitDame[i] = new_Skin.Skorpion;
          else if ( * (int * ) listHitDame[i] == 108004)
            *
            (int * ) listHitDame[i] = new_Skin.Pan;

          else
            listHitDame.erase(listHitDame.begin() + i);

          ////LOGI("list HitDame: %d", listHitDame.size());
        } else
          listHitDame.erase(listHitDame.begin() + i);
      }
    }

  }
  return nullptr;
}

int( * Orig_KillMess)(ASTExtraPlayerController * , FFatalDamageParameter * );
int Hook_KillMess(ASTExtraPlayerController * PlayerController, FFatalDamageParameter * FatalDamageParameter) {
  if (ModSkin.KillMessage) {
    auto g_LocalPlayer = m_LocalPlayer;
    auto g_LocalController = m_LocalController;
    if (g_LocalController != NULL && g_LocalPlayer != NULL && detectGame == 1 && detectLobby == 0) {

      uint32_t key = FatalDamageParameter -> CauserKey;
      if (key == g_LocalController -> PlayerKey) {

        if (ModSkin.XSuits >= 1)
          FatalDamageParameter -> CauserClothAvatarID = new_Skin.XSuits;

        if (!g_LocalPlayer -> CurrentVehicle) {
          auto WeaponManagerComponent = g_LocalPlayer -> WeaponManagerComponent;
          if (WeaponManagerComponent) {
            auto CurrentWeaponReplicated = (ASTExtraShootWeapon * ) WeaponManagerComponent -> CurrentWeaponReplicated;
            if (CurrentWeaponReplicated) {
              auto ShootWeaponComponent = CurrentWeaponReplicated -> ShootWeaponComponent;
              if (ShootWeaponComponent) {
                int g_WeaponID = g_LocalPlayer -> WeaponManagerComponent -> CurrentWeaponReplicated -> GetWeaponID();

                if (g_WeaponID == 101001) {
                  if (ModSkin.AKM >= 1)
                    FatalDamageParameter -> CauserWeaponAvatarID = new_Skin.AKM;
                } else if (g_WeaponID == 101002) {
                  if (ModSkin.M16A4 >= 1)
                    FatalDamageParameter -> CauserWeaponAvatarID = new_Skin.M16A4;
                } else if (g_WeaponID == 101003) {
                  if (ModSkin.Scar >= 1)
                    FatalDamageParameter -> CauserWeaponAvatarID = new_Skin.Scar;
                } else if (g_WeaponID == 101004) {
                  if (ModSkin.M416 >= 1)
                    FatalDamageParameter -> CauserWeaponAvatarID = new_Skin.M416_1;
                } else if (g_WeaponID == 101005) {
                  if (ModSkin.Groza >= 1)
                    FatalDamageParameter -> CauserWeaponAvatarID = new_Skin.Groza;
                } else if (g_WeaponID == 101006) {
                  if (ModSkin.AUG >= 1)
                    FatalDamageParameter -> CauserWeaponAvatarID = new_Skin.AUG;
                } else if (g_WeaponID == 101007) {
                  if (ModSkin.QBZ >= 1)
                    FatalDamageParameter -> CauserWeaponAvatarID = new_Skin.QBZ;
                } else if (g_WeaponID == 101008) {
                  if (ModSkin.M762 >= 1)
                    FatalDamageParameter -> CauserWeaponAvatarID = new_Skin.M762;
                } else if (g_WeaponID == 101102) {
                  if (ModSkin.ACE32 >= 1)
                    FatalDamageParameter -> CauserWeaponAvatarID = new_Skin.ACE32;
                } else if (g_WeaponID == 101012) {
                  if (ModSkin.Honey >= 1)
                    FatalDamageParameter -> CauserWeaponAvatarID = new_Skin.Honey;
                } else if (g_WeaponID == 102001) {
                  if (ModSkin.UZI >= 1)
                    FatalDamageParameter -> CauserWeaponAvatarID = new_Skin.UZI;
                } else if (g_WeaponID == 102002) {
                  if (ModSkin.UMP >= 1)
                    FatalDamageParameter -> CauserWeaponAvatarID = new_Skin.UMP;
                } else if (g_WeaponID == 102003) {
                  if (ModSkin.Vector >= 1)
                    FatalDamageParameter -> CauserWeaponAvatarID = new_Skin.Vector;
                } else if (g_WeaponID == 102004) {
                  if (ModSkin.Thompson >= 1)
                    FatalDamageParameter -> CauserWeaponAvatarID = new_Skin.Thompson;
                } else if (g_WeaponID == 102005) {
                  if (ModSkin.Bizon >= 1)
                    FatalDamageParameter -> CauserWeaponAvatarID = new_Skin.Bizon;
                } else if (g_WeaponID == 103001) {
                  if (ModSkin.K98 >= 1)
                    FatalDamageParameter -> CauserWeaponAvatarID = new_Skin.K98;
                } else if (g_WeaponID == 103002) {
                  if (ModSkin.M24 >= 1)
                    FatalDamageParameter -> CauserWeaponAvatarID = new_Skin.M24;
                } else if (g_WeaponID == 103003) {
                  if (ModSkin.AWM >= 1)
                    FatalDamageParameter -> CauserWeaponAvatarID = new_Skin.AWM;
                } else if (g_WeaponID == 103005) {
                  if (ModSkin.VSS >= 1)
                    FatalDamageParameter -> CauserWeaponAvatarID = new_Skin.VSS;
                } else if (g_WeaponID == 103004) {
                  if (ModSkin.SKS >= 1)
                    FatalDamageParameter -> CauserWeaponAvatarID = new_Skin.SKS;
                } else if (g_WeaponID == 103006) {
                  if (ModSkin.Mini14 >= 1)
                    FatalDamageParameter -> CauserWeaponAvatarID = new_Skin.Mini14;
                } else if (g_WeaponID == 103007) {
                  if (ModSkin.MK14 >= 1)
                    FatalDamageParameter -> CauserWeaponAvatarID = new_Skin.MK14;
                } else if (g_WeaponID == 103009) {
                  if (ModSkin.SLR >= 1)
                    FatalDamageParameter -> CauserWeaponAvatarID = new_Skin.SLR;
                } else if (g_WeaponID == 103012) {
                  if (ModSkin.AMR >= 1)
                    FatalDamageParameter -> CauserWeaponAvatarID = new_Skin.AMR;
                } else if (g_WeaponID == 104002) {
                  if (ModSkin.S1897 >= 1)
                    FatalDamageParameter -> CauserWeaponAvatarID = new_Skin.S1897;
                } else if (g_WeaponID == 105002) {
                  if (ModSkin.DP28 >= 1)
                    FatalDamageParameter -> CauserWeaponAvatarID = new_Skin.DP28;
                } else if (g_WeaponID == 105001) {
                  if (ModSkin.M249 >= 1)
                    FatalDamageParameter -> CauserWeaponAvatarID = new_Skin.M249;
                } else if (g_WeaponID == 105010) {
                  if (ModSkin.MG3 >= 1)
                    FatalDamageParameter -> CauserWeaponAvatarID = new_Skin.MG3;
                } else if (g_WeaponID == 106008) {
                  if (ModSkin.Skorpion >= 1)
                    FatalDamageParameter -> CauserWeaponAvatarID = new_Skin.Skorpion;
                } else if (g_WeaponID == 108004) {
                  if (ModSkin.Pan >= 1)
                    FatalDamageParameter -> CauserWeaponAvatarID = new_Skin.Pan;
                }

              }
            }
          }
        }
      }
    }
  }
  return Orig_KillMess(PlayerController, FatalDamageParameter);
}

void * hook_UE4(void * ) {
  libUE4Base = Tools::GetBaseAddress("libUE4.so");
  while (!libUE4Base) {
    libUE4Base = Tools::GetBaseAddress("libUE4.so");
    sleep(1);
  }

  sleep(5);
  HOOK_LIB("libUE4.so", "0x4A53724", hkProcessEvent, oProcessEvent);
  HOOK_LIB("libUE4.so", "0x243E614", hHitDame, HitDame);
  HOOK_LIB("libUE4.so", "0x2CDE644", Hook_KillMess, Orig_KillMess);

  LOGI("DONE UE4");
  return nullptr;
}

void * hook_anort(void * ) {
  while (!anort) {
    anort = Tools::GetBaseAddress("libanort.so");
    sleep(1);
  }

  HOOK_LIB("libanort.so", "0xA097F", hsub_E2172, osub_E2172);
  HOOK_LIB("libanort.so", "0xA0BF7", hsub_E2172, osub_E2172);
  HOOK_LIB("libanort.so", "0xA0A69", hsub_E2172, osub_E2172);
  LOGI("PATCH ANORT Done");
  return nullptr;
}

__attribute__((constructor))
void lib_main() {
  checkFileForPlugin();
  pthread_t ptid;
  pthread_t ptid2;
  pthread_t ptid3;
  pthread_t ptid4;
  pthread_create( & ptid, NULL, hook_anort, NULL);
  pthread_create( & ptid3, NULL, hook_UE4, NULL);
  pthread_create( & ptid4, NULL, readfileSkin, NULL);
  pthread_create( & ptid4, NULL, threadMod, NULL);
}