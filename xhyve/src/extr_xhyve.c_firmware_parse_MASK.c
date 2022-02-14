
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,char*,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*,char*,char*) ;
 int VAR_3 ;
 char* FUNC_3 (char*,char) ;
 char* FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_7(const char *VAR_4) {
 char *VAR_5, *VAR_6, *VAR_7, *VAR_8, *VAR_9;

 VAR_5 = FUNC_4(VAR_4);

 if (FUNC_6(VAR_5, "kexec", FUNC_5("kexec")) == 0) {
  VAR_1 = VAR_2;
 } else if (FUNC_6(VAR_5, "fbsd", FUNC_5("fbsd")) == 0) {
  VAR_1 = VAR_0;
 } else {
  goto fail;
 }

  if ((VAR_9 = FUNC_3(VAR_5, ',')) != ((void*)0)) {
   *VAR_9 = '\0';
   VAR_6 = VAR_9 + 1;
  } else {
   goto fail;
  }

  if ((VAR_9 = FUNC_3(VAR_6, ',')) != ((void*)0)) {
   *VAR_9 = '\0';
   VAR_7 = VAR_9 + 1;
  } else {
   goto fail;
  }

  if ((VAR_9 = FUNC_3(VAR_7, ',')) != ((void*)0)) {
   *VAR_9 = '\0';
   VAR_8 = VAR_9 + 1;
  } else {
   goto fail;
  }

  VAR_7 = FUNC_5(VAR_7) ? VAR_7 : ((void*)0);
  VAR_8 = FUNC_5(VAR_8) ? VAR_8 : ((void*)0);

 if (VAR_1 == VAR_2) {
  FUNC_2(VAR_6, VAR_7, VAR_8);
 } else if (VAR_1 == VAR_0) {

  FUNC_0(VAR_6, VAR_7, VAR_8, ((void*)0));
 } else {
  goto fail;
 }

 return 0;

fail:
 FUNC_1(VAR_3, "Invalid firmware argument\n"
  "    -f kexec,'kernel','initrd','\"cmdline\"'\n"
  "    -f fbsd,'userboot','boot volume','\"kernel env\"'\n");

 return -1;
}
