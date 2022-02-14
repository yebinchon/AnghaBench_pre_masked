
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int) ;
 char* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int,char**,char*,int ,int *) ;
 void* VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char const*,char*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(int VAR_19, char *VAR_20[])
{
 int VAR_21;
 int VAR_22;


 if (VAR_19 < 2) FUNC_8(VAR_20[0]);

 const char *VAR_23 = VAR_20[1];
 if (!FUNC_7(VAR_23, "backup"))
  VAR_13 = VAR_0;
 else if (!FUNC_7(VAR_23, "recover"))
  VAR_13 = VAR_1;
 else FUNC_8(VAR_20[0]);


 FUNC_4(4000);
 FUNC_6(0);


 VAR_18 = 2;
 while ((VAR_21 = FUNC_2(VAR_19, VAR_20, "vzZfFtTio:d:K:k:", VAR_14, ((void*)0))) != -1)
 {
  switch (VAR_21)
  {
  case 'v':
   VAR_16 = 1;
   break;
  case 'z':
   VAR_11 &= (~VAR_5);
   break;
  case 'Z':
   VAR_11 |= VAR_5;
   break;
  case 'f':
   VAR_11 |= VAR_2;
   break;
  case 'F':
   VAR_11 &= (~VAR_2);
   break;
  case 't':
   VAR_11 &= (~VAR_6);
   break;
  case 'T':
   VAR_11 |= VAR_6;
   break;
  case 'i':
   VAR_11 |= VAR_3;
   break;
  case 'o':
   VAR_10 = VAR_17;
   break;
  case 'd':
   VAR_15 = VAR_17;
   break;
  case 'K':
   VAR_9 = VAR_17;
   break;
  case 'k':
   VAR_12 = VAR_17;
   break;
  case 0x100:
   VAR_22 = FUNC_0(VAR_17);
   if (VAR_22 == 1)
   {
    FUNC_4(4000);
    FUNC_6(0);
   }
   else if (VAR_22 == 2)
   {
    FUNC_4(4000);
    FUNC_6(1);
   }
   else if (VAR_22 == 3)
   {
    FUNC_4(64000);
    FUNC_6(1);
   }
   else
   {
    FUNC_3(VAR_7, "Version must be 1, 2 or 3");
    FUNC_1(-1);
   }
   break;
  case 0x101:
   VAR_22 = FUNC_0(VAR_17);
   if (VAR_22 != 512 && VAR_22 != 1024 && VAR_22 != 2048 && VAR_22 != 4096 &&
     VAR_22 != 8192 && VAR_22 != 16384 && VAR_22 != 32768 && VAR_22 != 65536)
   {
    FUNC_3(VAR_7, "Page size must be 512, 1024, 2048, ..., 65536");
    FUNC_1(-1);
   }
   FUNC_5(VAR_22);
   break;
  default:
   FUNC_8(VAR_20[0]);
  }
 }

 if (VAR_18 != VAR_19 - 1)
  FUNC_8(VAR_20[0]);
 VAR_8 = VAR_20[VAR_18++];

 if (!VAR_10)
 {
  FUNC_3(VAR_7, "Output path must be specified.");
  FUNC_8(VAR_20[0]);
 }

 if (VAR_12 == ((void*)0))
  VAR_11 |= VAR_4;
}
