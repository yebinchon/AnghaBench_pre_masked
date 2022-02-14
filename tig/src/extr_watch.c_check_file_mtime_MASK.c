
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct stat {scalar_t__ st_mtime; } ;
typedef int path ;


 int FUNC_0 (char*,int,char const*,int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char*,struct stat*) ;

__attribute__((used)) static bool
FUNC_2(time_t *VAR_1, const char *VAR_2, ...)
{
 char VAR_3[VAR_0];
 struct stat VAR_4;
 int VAR_5;
 bool VAR_6 = !!*VAR_1;

 FUNC_0(VAR_3, sizeof(VAR_3), VAR_2, VAR_5, 0);

 if (VAR_5 < 0 ||
     FUNC_1(VAR_3, &VAR_4) < 0 ||
     VAR_4.st_mtime <= *VAR_1)
  return 0;

 *VAR_1 = VAR_4.st_mtime;
 return VAR_6;
}
