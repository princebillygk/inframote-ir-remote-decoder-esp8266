#include <IRremoteESP8266.h>

char cstr_UNKNOWN[] = " UNKNOWN";
char cstr_UNUSED[] = " UNUSED";
char cstr_RC5[] = " RC5";
char cstr_RC6[] = " RC6";
char cstr_NEC[] = " NEC";
char cstr_SONY[] = " SONY";
char cstr_PANASONIC[] = " PANASONIC"; // (5)
char cstr_JVC[] = " JVC";
char cstr_SAMSUNG[] = " SAMSUNG";
char cstr_WHYNTER[] = " WHYNTER";
char cstr_AIWA_RC_T501[] = " AIWA_RC_T501";
char cstr_LG[] = " LG"; // (10)
char cstr_SANYO[] = " SANYO";
char cstr_MITSUBISHI[] = " MITSUBISHI";
char cstr_DISH[] = " DISH";
char cstr_SHARP[] = " SHARP";
char cstr_COOLIX[] = " COOLIX"; // (15)
char cstr_DAIKIN[] = " DAIKIN";
char cstr_DENON[] = " DENON";
char cstr_KELVINATOR[] = " KELVINATOR";
char cstr_SHERWOOD[] = " SHERWOOD";
char cstr_MITSUBISHI_AC[] = " MITSUBISHI_AC"; // (20)
char cstr_RCMM[] = " RCMM";
char cstr_SANYO_LC7461[] = " SANYO_LC7461";
char cstr_RC5X[] = " RC5X";
char cstr_GREE[] = " GREE";
char cstr_PRONTO[] =
    " PRONTO"; // Technically not a protocol, but an encoding. (25)
char cstr_NEC_LIKE[] = " NEC_LIKE";
char cstr_ARGO[] = " ARGO";
char cstr_TROTEC[] = " TROTEC";
char cstr_NIKAI[] = " NIKAI";
char cstr_RAW[] = " RAW"; // Technically not a protocol, but an encoding. (30)
char cstr_GLOBALCACHE[] =
    " GLOBALCACHE"; // Technically not a protocol, but an encoding.
char cstr_TOSHIBA_AC[] = " TOSHIBA_AC";
char cstr_FUJITSU_AC[] = " FUJITSU_AC";
char cstr_MIDEA[] = " MIDEA";
char cstr_MAGIQUEST[] = " MAGIQUEST"; // (35)
char cstr_LASERTAG[] = " LASERTAG";
char cstr_CARRIER_AC[] = " CARRIER_AC";
char cstr_HAIER_AC[] = " HAIER_AC";
char cstr_MITSUBISHI2[] = " MITSUBISHI2";
char cstr_HITACHI_AC[] = " HITACHI_AC"; // (40)
char cstr_HITACHI_AC1[] = " HITACHI_AC1";
char cstr_HITACHI_AC2[] = " HITACHI_AC2";
char cstr_GICABLE[] = " GICABLE";
char cstr_HAIER_AC_YRW02[] = " HAIER_AC_YRW02";
char cstr_WHIRLPOOL_AC[] = " WHIRLPOOL_AC"; // (45)
char cstr_SAMSUNG_AC[] = " SAMSUNG_AC";
char cstr_LUTRON[] = " LUTRON";
char cstr_ELECTRA_AC[] = " ELECTRA_AC";
char cstr_PANASONIC_AC[] = " PANASONIC_AC";
char cstr_PIONEER[] = " PIONEER"; // (50)
char cstr_LG2[] = " LG2";
char cstr_MWM[] = " MWM";
char cstr_DAIKIN2[] = " DAIKIN2";
char cstr_VESTEL_AC[] = " VESTEL_AC";
char cstr_TECO[] = " TECO"; // (55)
char cstr_SAMSUNG36[] = " SAMSUNG36";
char cstr_TCL112AC[] = " TCL112AC";
char cstr_LEGOPF[] = " LEGOPF";
char cstr_MITSUBISHI_HEAVY_88[] = " MITSUBISHI_HEAVY_88";
char cstr_MITSUBISHI_HEAVY_152[] = " MITSUBISHI_HEAVY_152"; // 60
char cstr_DAIKIN216[] = " DAIKIN216";
char cstr_SHARP_AC[] = " SHARP_AC";
char cstr_GOODWEATHER[] = " GOODWEATHER";
char cstr_INAX[] = " INAX";
char cstr_DAIKIN160[] = " DAIKIN160"; // 65
char cstr_NEOCLIMA[] = " NEOCLIMA";
char cstr_DAIKIN176[] = " DAIKIN176";
char cstr_DAIKIN128[] = " DAIKIN128";
char cstr_AMCOR[] = " AMCOR";
char cstr_DAIKIN152[] = " DAIKIN152"; // 70
char cstr_MITSUBISHI136[] = " MITSUBISHI136";
char cstr_MITSUBISHI112[] = " MITSUBISHI112";
char cstr_HITACHI_AC424[] = " HITACHI_AC424";
char cstr_SONY_38K[] = " SONY_38K";
char cstr_EPSON[] = " EPSON"; // 75
char cstr_SYMPHONY[] = " SYMPHONY";
char cstr_HITACHI_AC3[] = " HITACHI_AC3";
char cstr_DAIKIN64[] = " DAIKIN64";
char cstr_AIRWELL[] = " AIRWELL";
char cstr_DELONGHI_AC[] = " DELONGHI_AC"; // 80
char cstr_DOSHISHA[] = " DOSHISHA";
char cstr_MULTIBRACKETS[] = " MULTIBRACKETS";
char cstr_CARRIER_AC40[] = " CARRIER_AC40";
char cstr_CARRIER_AC64[] = " CARRIER_AC64";
char cstr_HITACHI_AC344[] = " HITACHI_AC344"; // 85
char cstr_CORONA_AC[] = " CORONA_AC";
char cstr_MIDEA24[] = " MIDEA24";
char cstr_ZEPEAL[] = " ZEPEAL";
char cstr_SANYO_AC[] = " SANYO_AC";
char cstr_VOLTAS[] = " VOLTAS"; // 90
char cstr_METZ[] = " METZ";
char cstr_TRANSCOLD[] = " TRANSCOLD";
char cstr_TECHNIBEL_AC[] = " TECHNIBEL_AC";
char cstr_MIRAGE[] = " MIRAGE";
char cstr_ELITESCREENS[] = " ELITESCREENS"; // 95
char cstr_PANASONIC_AC32[] = " PANASONIC_AC32";
char cstr_MILESTAG2[] = " MILESTAG2";
char cstr_ECOCLIM[] = " ECOCLIM";
char cstr_XMP[] = " XMP";
char cstr_TRUMA[] = " TRUMA"; // 100
char cstr_HAIER_AC176[] = " HAIER_AC176";
char cstr_TEKNOPOINT[] = " TEKNOPOINT";
char cstr_KELON[] = " KELON";
char cstr_TROTEC_3550[] = " TROTEC_3550";
char cstr_SANYO_AC88[] = " SANYO_AC88"; // 105
char cstr_BOSE[] = " BOSE";
char cstr_ARRIS[] = " ARRIS";
char cstr_RHOSS[] = " RHOSS";
char cstr_AIRTON[] = " AIRTON";
char cstr_COOLIX48[] = " COOLIX48"; // 110
char cstr_HITACHI_AC264[] = " HITACHI_AC264";
char cstr_KELON168[] = " KELON168";
char cstr_HITACHI_AC296[] = " HITACHI_AC296";

char *decodeTypeStr(decode_type_t t) {
  char *cstr_t = cstr_UNKNOWN;
  switch (t) {
  case UNKNOWN:
    cstr_t = cstr_UNKNOWN;
    break;
  case UNUSED:
    cstr_t = cstr_UNUSED;
    break;
  case RC5:
    cstr_t = cstr_RC5;
    break;
  case RC6:
    cstr_t = cstr_RC6;
    break;
  case NEC:
    cstr_t = cstr_NEC;
    break;
  case SONY:
    cstr_t = cstr_SONY;
    break;
  case PANASONIC:
    cstr_t = cstr_PANASONIC;
    break; // (5)
  case JVC:
    cstr_t = cstr_JVC;
    break;
  case SAMSUNG:
    cstr_t = cstr_SAMSUNG;
    break;
  case WHYNTER:
    cstr_t = cstr_WHYNTER;
    break;
  case AIWA_RC_T501:
    cstr_t = cstr_AIWA_RC_T501;
    break;
  case LG:
    cstr_t = cstr_LG;
    break; // (10)
  case SANYO:
    cstr_t = cstr_SANYO;
    break;
  case MITSUBISHI:
    cstr_t = cstr_MITSUBISHI;
    break;
  case DISH:
    cstr_t = cstr_DISH;
    break;
  case SHARP:
    cstr_t = cstr_SHARP;
    break;
  case COOLIX:
    cstr_t = cstr_COOLIX;
    break; // (15)
  case DAIKIN:
    cstr_t = cstr_DAIKIN;
    break;
  case DENON:
    cstr_t = cstr_DENON;
    break;
  case KELVINATOR:
    cstr_t = cstr_KELVINATOR;
    break;
  case SHERWOOD:
    cstr_t = cstr_SHERWOOD;
    break;
  case MITSUBISHI_AC:
    cstr_t = cstr_MITSUBISHI_AC;
    break; // (20)
  case RCMM:
    cstr_t = cstr_RCMM;
    break;
  case SANYO_LC7461:
    cstr_t = cstr_SANYO_LC7461;
    break;
  case RC5X:
    cstr_t = cstr_RC5X;
    break;
  case GREE:
    cstr_t = cstr_GREE;
    break;
  case PRONTO:
    cstr_t = cstr_PRONTO;
    break; // Technically not a protocol, but an encoding. (25)
  case NEC_LIKE:
    cstr_t = cstr_NEC_LIKE;
    break;
  case ARGO:
    cstr_t = cstr_ARGO;
    break;
  case TROTEC:
    cstr_t = cstr_TROTEC;
    break;
  case NIKAI:
    cstr_t = cstr_NIKAI;
    break;
  case RAW:
    cstr_t = cstr_RAW;
    break; // Technically not a protocol, but an encoding. (30)
  case GLOBALCACHE:
    cstr_t = cstr_GLOBALCACHE;
    break; // Technically not a protocol, but an encoding.
  case TOSHIBA_AC:
    cstr_t = cstr_TOSHIBA_AC;
    break;
  case FUJITSU_AC:
    cstr_t = cstr_FUJITSU_AC;
    break;
  case MIDEA:
    cstr_t = cstr_MIDEA;
    break;
  case MAGIQUEST:
    cstr_t = cstr_MAGIQUEST;
    break; // (35)
  case LASERTAG:
    cstr_t = cstr_LASERTAG;
    break;
  case CARRIER_AC:
    cstr_t = cstr_CARRIER_AC;
    break;
  case HAIER_AC:
    cstr_t = cstr_HAIER_AC;
    break;
  case MITSUBISHI2:
    cstr_t = cstr_MITSUBISHI2;
    break;
  case HITACHI_AC:
    cstr_t = cstr_HITACHI_AC;
    break; // (40)
  case HITACHI_AC1:
    cstr_t = cstr_HITACHI_AC1;
    break;
  case HITACHI_AC2:
    cstr_t = cstr_HITACHI_AC2;
    break;
  case GICABLE:
    cstr_t = cstr_GICABLE;
    break;
  case HAIER_AC_YRW02:
    cstr_t = cstr_HAIER_AC_YRW02;
    break;
  case WHIRLPOOL_AC:
    cstr_t = cstr_WHIRLPOOL_AC;
    break; // (45)
  case SAMSUNG_AC:
    cstr_t = cstr_SAMSUNG_AC;
    break;
  case LUTRON:
    cstr_t = cstr_LUTRON;
    break;
  case ELECTRA_AC:
    cstr_t = cstr_ELECTRA_AC;
    break;
  case PANASONIC_AC:
    cstr_t = cstr_PANASONIC_AC;
    break;
  case PIONEER:
    cstr_t = cstr_PIONEER;
    break; // (50)
  case LG2:
    cstr_t = cstr_LG2;
    break;
  case MWM:
    cstr_t = cstr_MWM;
    break;
  case DAIKIN2:
    cstr_t = cstr_DAIKIN2;
    break;
  case VESTEL_AC:
    cstr_t = cstr_VESTEL_AC;
    break;
  case TECO:
    cstr_t = cstr_TECO;
    break; // (55)
  case SAMSUNG36:
    cstr_t = cstr_SAMSUNG36;
    break;
  case TCL112AC:
    cstr_t = cstr_TCL112AC;
    break;
  case LEGOPF:
    cstr_t = cstr_LEGOPF;
    break;
  case MITSUBISHI_HEAVY_88:
    cstr_t = cstr_MITSUBISHI_HEAVY_88;
    break;
  case MITSUBISHI_HEAVY_152:
    cstr_t = cstr_MITSUBISHI_HEAVY_152;
    break; // 60
  case DAIKIN216:
    cstr_t = cstr_DAIKIN216;
    break;
  case SHARP_AC:
    cstr_t = cstr_SHARP_AC;
    break;
  case GOODWEATHER:
    cstr_t = cstr_GOODWEATHER;
    break;
  case INAX:
    cstr_t = cstr_INAX;
    break;
  case DAIKIN160:
    cstr_t = cstr_DAIKIN160;
    break; // 65
  case NEOCLIMA:
    cstr_t = cstr_NEOCLIMA;
    break;
  case DAIKIN176:
    cstr_t = cstr_DAIKIN176;
    break;
  case DAIKIN128:
    cstr_t = cstr_DAIKIN128;
    break;
  case AMCOR:
    cstr_t = cstr_AMCOR;
    break;
  case DAIKIN152:
    cstr_t = cstr_DAIKIN152;
    break; // 70
  case MITSUBISHI136:
    cstr_t = cstr_MITSUBISHI136;
    break;
  case MITSUBISHI112:
    cstr_t = cstr_MITSUBISHI112;
    break;
  case HITACHI_AC424:
    cstr_t = cstr_HITACHI_AC424;
    break;
  case SONY_38K:
    cstr_t = cstr_SONY_38K;
    break;
  case EPSON:
    cstr_t = cstr_EPSON;
    break; // 75
  case SYMPHONY:
    cstr_t = cstr_SYMPHONY;
    break;
  case HITACHI_AC3:
    cstr_t = cstr_HITACHI_AC3;
    break;
  case DAIKIN64:
    cstr_t = cstr_DAIKIN64;
    break;
  case AIRWELL:
    cstr_t = cstr_AIRWELL;
    break;
  case DELONGHI_AC:
    cstr_t = cstr_DELONGHI_AC;
    break; // 80
  case DOSHISHA:
    cstr_t = cstr_DOSHISHA;
    break;
  case MULTIBRACKETS:
    cstr_t = cstr_MULTIBRACKETS;
    break;
  case CARRIER_AC40:
    cstr_t = cstr_CARRIER_AC40;
    break;
  case CARRIER_AC64:
    cstr_t = cstr_CARRIER_AC64;
    break;
  case HITACHI_AC344:
    cstr_t = cstr_HITACHI_AC344;
    break; // 85
  case CORONA_AC:
    cstr_t = cstr_CORONA_AC;
    break;
  case MIDEA24:
    cstr_t = cstr_MIDEA24;
    break;
  case ZEPEAL:
    cstr_t = cstr_ZEPEAL;
    break;
  case SANYO_AC:
    cstr_t = cstr_SANYO_AC;
    break;
  case VOLTAS:
    cstr_t = cstr_VOLTAS;
    break; // 90
  case METZ:
    cstr_t = cstr_METZ;
    break;
  case TRANSCOLD:
    cstr_t = cstr_TRANSCOLD;
    break;
  case TECHNIBEL_AC:
    cstr_t = cstr_TECHNIBEL_AC;
    break;
  case MIRAGE:
    cstr_t = cstr_MIRAGE;
    break;
  case ELITESCREENS:
    cstr_t = cstr_ELITESCREENS;
    break; // 95
  case PANASONIC_AC32:
    cstr_t = cstr_PANASONIC_AC32;
    break;
  case MILESTAG2:
    cstr_t = cstr_MILESTAG2;
    break;
  case ECOCLIM:
    cstr_t = cstr_ECOCLIM;
    break;
  case XMP:
    cstr_t = cstr_XMP;
    break;
  case TRUMA:
    cstr_t = cstr_TRUMA;
    break; // 100
  case HAIER_AC176:
    cstr_t = cstr_HAIER_AC176;
    break;
  case TEKNOPOINT:
    cstr_t = cstr_TEKNOPOINT;
    break;
  case KELON:
    cstr_t = cstr_KELON;
    break;
  case TROTEC_3550:
    cstr_t = cstr_TROTEC_3550;
    break;
  case SANYO_AC88:
    cstr_t = cstr_SANYO_AC88;
    break; // 105
  case BOSE:
    cstr_t = cstr_BOSE;
    break;
  case ARRIS:
    cstr_t = cstr_ARRIS;
    break;
  case RHOSS:
    cstr_t = cstr_RHOSS;
    break;
  case AIRTON:
    cstr_t = cstr_AIRTON;
    break;
  case COOLIX48:
    cstr_t = cstr_COOLIX48;
    break; // 110
  case HITACHI_AC264:
    cstr_t = cstr_HITACHI_AC264;
    break;
  case KELON168:
    cstr_t = cstr_KELON168;
    break;
  case HITACHI_AC296:
    cstr_t = cstr_HITACHI_AC296;
    break;
  }
  return cstr_t;
}