
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
 char* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (char*,char**,int) ;

int
FUNC_1(const char *VAR_16, const char *VAR_17, char *VAR_18, int VAR_19)
{
 char *VAR_20[9] = {
     "/bin/mount",
     "--no-canonicalize",
     "-t", VAR_7,
     "-o", VAR_18,
     (char *)VAR_16,
     (char *)VAR_17,
     (char *)((void*)0) };
 int VAR_21;


 VAR_21 = FUNC_0(VAR_20[0], VAR_20, VAR_15|VAR_14);
 if (VAR_21) {
  if (VAR_21 & VAR_9)
   return (VAR_4);
  if (VAR_21 & VAR_13)
   return (VAR_2);
  if (VAR_21 & VAR_10)
   return (VAR_6);
  if (VAR_21 & VAR_8)
   return (VAR_1);
  if (VAR_21 & VAR_11)
   return (VAR_0);
  if (VAR_21 & VAR_12)
   return (VAR_3);

  return (VAR_5);
 }

 return (0);
}
