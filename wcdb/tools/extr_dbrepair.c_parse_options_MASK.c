
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int use_hmac; int key_len; void* key; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int) ;
 TYPE_1__ VAR_0 ;
 char const** VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int,char**,char*,int ,int *) ;
 void* VAR_11 ;
 int VAR_12 ;
 void* FUNC_4 (char const**,size_t) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(int VAR_13, char *VAR_14[])
{
 int VAR_15;
 int VAR_16;

 if (VAR_13 < 2) FUNC_9(VAR_14[0]);


 FUNC_5(4000);
 FUNC_7(0);

 VAR_0.use_hmac = -1;


 VAR_12 = 1;
 while ((VAR_15 = FUNC_3(VAR_13, VAR_14, "hvo:K:k:M:m:", VAR_6, ((void*)0))) != -1)
 {
  switch (VAR_15)
  {
        case 'h':
            FUNC_9(VAR_14[0]);
            break;
  case 'v':
   VAR_10 = 1;
   break;
  case 'o':
   VAR_8 = VAR_11;
   break;
  case 'K':
   VAR_7 = VAR_11;
   break;
  case 'k':
   VAR_0.key = VAR_11;
   VAR_0.key_len = FUNC_8(VAR_11);
   break;
  case 'f':
   if (VAR_5 == VAR_2)
   {
    size_t VAR_17 = VAR_2 ? VAR_2 * 2 : 64;
    void *VAR_18 = FUNC_4(VAR_1, VAR_17 * sizeof(const char *));
    if (!VAR_18) FUNC_2(-5);
    VAR_1 = (const char **) VAR_18;
    VAR_2 = VAR_17;
   }
   VAR_1[VAR_5++] = VAR_11;
   break;
  case 'M':
   VAR_9 = VAR_11;
   break;
  case 'm':
   VAR_4 = VAR_11;
   break;
  case 0x100:
   VAR_16 = FUNC_1(VAR_11);
   if (VAR_16 == 1)
   {
    FUNC_5(4000);
    FUNC_7(0);
   }
   else if (VAR_16 == 2)
   {
    FUNC_5(4000);
    FUNC_7(1);
   }
   else if (VAR_16 == 3)
   {
    FUNC_5(64000);
    FUNC_7(1);
   }
   else
   {
    FUNC_0("Version must be 1, 2 or 3");
    FUNC_2(-1);
   }
   break;
  case 0x101:
   VAR_16 = FUNC_1(VAR_11);
   if (VAR_16 != 512 && VAR_16 != 1024 && VAR_16 != 2048 && VAR_16 != 4096 &&
     VAR_16 != 8192 && VAR_16 != 16384 && VAR_16 != 32768 && VAR_16 != 65536)
   {
    FUNC_0("Page size must be 512, 1024, 2048, ..., or 65536");
    FUNC_2(-1);
   }
            FUNC_6(VAR_16);
   break;
        default:
            FUNC_9(VAR_14[0]);
  }
 }

 if (VAR_12 != VAR_13 - 1)
  FUNC_9(VAR_14[0]);
 VAR_3 = VAR_14[VAR_12++];

 if (VAR_9 && (VAR_4 || VAR_8))
 {
  FUNC_0("--save-master must be used without --load-master or --output.");
  FUNC_9(VAR_14[0]);
 }

 if (!VAR_8 && !VAR_9)
 {
  FUNC_0("Output path must be specified.");
  FUNC_9(VAR_14[0]);
 }
}
