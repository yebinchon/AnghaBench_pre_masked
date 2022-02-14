
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct stat {int st_mode; scalar_t__ st_uid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (char*,struct stat*) ;
 scalar_t__ FUNC_5 (char*,int ) ;
 int * FUNC_6 (char*,char*) ;
 char const* FUNC_7 (scalar_t__) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (char**,char*,char*,...) ;

__attribute__((used)) static char *
FUNC_10(const char *VAR_9, char **VAR_10)
{
 char *VAR_11, VAR_12[VAR_4], *VAR_13, *VAR_14;
 struct stat VAR_15;
 uid_t VAR_16;

 *VAR_10 = ((void*)0);

 if (VAR_9 == ((void*)0))
  VAR_9 = "default";
 VAR_16 = FUNC_3();

 if ((VAR_14 = FUNC_2("TMUX_TMPDIR")) != ((void*)0) && *VAR_14 != '\0')
  FUNC_9(&VAR_11, "%s/tmux-%ld", VAR_14, (long)VAR_16);
 else
  FUNC_9(&VAR_11, "%s/tmux-%ld", VAR_7, (long)VAR_16);
 if (FUNC_6(VAR_11, VAR_12) == ((void*)0) &&
     FUNC_8(VAR_12, VAR_11, sizeof VAR_12) >= sizeof VAR_12) {
  VAR_8 = VAR_3;
  FUNC_1(VAR_11);
  goto fail;
 }
 FUNC_1(VAR_11);

 if (FUNC_5(VAR_12, VAR_6) != 0 && VAR_8 != VAR_1)
  goto fail;
 if (FUNC_4(VAR_12, &VAR_15) != 0)
  goto fail;
 if (!FUNC_0(VAR_15.st_mode)) {
  VAR_8 = VAR_2;
  goto fail;
 }
 if (VAR_15.st_uid != VAR_16 || (VAR_15.st_mode & VAR_5) != 0) {
  VAR_8 = VAR_0;
  goto fail;
 }
 FUNC_9(&VAR_13, "%s/%s", VAR_12, VAR_9);
 return (VAR_13);

fail:
 FUNC_9(VAR_10, "error creating %s (%s)", VAR_12, FUNC_7(VAR_8));
 return (((void*)0));
}
