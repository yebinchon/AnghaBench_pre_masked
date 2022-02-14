
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,char**,int) ;

int
FUNC_1(const char *VAR_6, int VAR_7)
{
 char VAR_8[] = "-f";
 char VAR_9[] = "-l";
 char *VAR_10[7] = {
     "/bin/umount",
     "-t", VAR_1,
     ((void*)0), ((void*)0), ((void*)0), ((void*)0) };
 int VAR_11, VAR_12 = 3;

 if (VAR_7 & VAR_3) {
  VAR_10[VAR_12] = VAR_8;
  VAR_12++;
 }

 if (VAR_7 & VAR_2) {
  VAR_10[VAR_12] = VAR_9;
  VAR_12++;
 }

 VAR_10[VAR_12] = (char *)VAR_6;
 VAR_11 = FUNC_0(VAR_10[0], VAR_10, VAR_5|VAR_4);

 return (VAR_11 ? VAR_0 : 0);
}
