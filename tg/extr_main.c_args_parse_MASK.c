
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char* member_0; int member_3; int member_2; int const member_1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (void*) ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int,char**,char*,struct option*,int *) ;
 int VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 int VAR_18 ;

 void* VAR_19 ;

 int VAR_20 ;
 int VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 int VAR_25 ;

 int VAR_26 ;
 int FUNC_3 (void*) ;
 void* VAR_27 ;
 void* VAR_28 ;
 void* VAR_29 ;
 void* FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int VAR_30 ;
 int * VAR_31 ;
 int VAR_32 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,void*) ;
 int FUNC_8 () ;
 int FUNC_9 (void*) ;
 void* VAR_33 ;
 int FUNC_10 () ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;

void FUNC_11 (int VAR_37, char **VAR_38) {
  VAR_0 = FUNC_8 ();

  static struct option VAR_39[] = {
    {"debug-allocator", 130, 0, 1000 },
    {"phone", 128, 0, 'u'},
    {"rsa-key", 128, 0, 'k'},
    {"verbosity", 130, 0, 'v'},
    {"enable-msg-id", 130, 0, 'N'},
    {"log-level", 128, 0, 'l'},
    {"sync-from-start", 130, 0, 'f'},
    {"disable-auto-accept", 130, 0, 'E'},
    {"allow-weak-random", 130, 0, 'w'},



    {"wait-dialog-list", 130, 0, 'W'},
    {"disable-colors", 130, 0, 'C'},
    {"disable-readline", 130, 0, 'R'},
    {"alert", 130, 0, 'A'},
    {"daemonize", 130, 0, 'd'},
    {"logname", 128, 0, 'L'},
    {"username", 128, 0, 'U'},
    {"groupname", 128, 0, 'G'},
    {"disable-output", 130, 0, 'D'},
    {"reset-authorization", 130, 0, 'q'},
    {"tcp-port", 128, 0, 'P'},
    {"unix-socket", 128, 0, 'S'},
    {"exec", 128, 0, 'e'},
    {"disable-names", 130, 0, 'I'},
    {"enable-ipv6", 130, 0, '6'},
    {"bot", 129, 0, 'b'},
    {"help", 130, 0, 'h'},
    {"accept-any-tcp", 130, 0, 1001},
    {"disable-link-preview", 130, 0, 1002},
    {"json", 130, 0, 1003},
    {"python-script", 128, 0, 'Z'},
    {"permanent-msg-ids", 130, 0, 1004},
    {"permanent-peer-ids", 130, 0, 1005},
    {0, 0, 0, 0 }
  };



  int VAR_40 = 0;
  while ((VAR_40 = FUNC_2 (VAR_37, VAR_38, "u:hk:vNl:fEwWCRAdL:DU:G:qP:S:e:I6b"
  , VAR_39, ((void*)0)

  )) != -1) {
    switch (VAR_40) {
    case 'b':
      VAR_6 ++;
      if (VAR_19) {
        VAR_5 = VAR_19;
      }
      break;
    case 1000:
      VAR_31 = &VAR_32;
      break;
    case 1001:
      VAR_1 = 1;
      break;
    case 'u':
      FUNC_3 (VAR_19);
      break;
    case 'k':

      FUNC_7 (VAR_0, VAR_19);
      break;
    case 'v':
      FUNC_6 (VAR_0);
      VAR_35 ++;
      break;
    case 'N':
      VAR_18 ++;
      break;
    case 'l':
      VAR_15 = FUNC_1 (VAR_19);
      break;
    case 'f':
      VAR_30 = 1;
      break;
    case 'E':
      VAR_9 = 1;
      break;
    case 'w':
      VAR_3 = 1;
      break;





    case 'W':
      VAR_36 = 1;
      break;





    case 'C':
      VAR_10 ++;
      break;
    case 'R':
      VAR_25 ++;
      break;
    case 'A':
      VAR_2 = 1;
      break;
    case 'd':
      VAR_8 ++;
      break;
    case 'L':
      VAR_16 = VAR_19;
      break;
    case 'U':
      VAR_28 = VAR_19;
      break;
    case 'G':
      VAR_27 = VAR_19;
      break;
    case 'D':
      VAR_12 ++;
      break;
    case 'q':
      VAR_26 ++;
      break;
    case 'P':
      VAR_22 = FUNC_1 (VAR_19);
      break;
    case 'S':
      VAR_33 = VAR_19;
      break;
    case 'e':
      VAR_29 = VAR_19;
      break;
    case 'I':
      VAR_34 ++;
      break;
    case '6':
      VAR_14 = 1;
      break;
    case 1002:
      VAR_11 = 2;
      break;
    case 1003:
      VAR_13 = 1;
      break;
    case 1004:
      VAR_20 = 1;
      break;
    case 1005:
      VAR_21 = 1;
      break;
    case 'h':
    default:
      FUNC_10 ();
      break;
    }
  }
}
