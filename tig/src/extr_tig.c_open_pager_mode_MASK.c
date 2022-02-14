
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum request { ____Placeholder_request } request ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (char*) ;

__attribute__((used)) static enum request
FUNC_6(enum request VAR_8)
{
 if (VAR_8 == VAR_4) {

  if (FUNC_0(VAR_7, "--stdin")) {
   FUNC_3(((void*)0), VAR_0);
  } else if (FUNC_0(VAR_6, "--pretty=raw")) {
   FUNC_3(((void*)0), VAR_1);
  } else {
   FUNC_4(((void*)0), VAR_1);
  }

 } else if (VAR_8 == VAR_3) {
  if (FUNC_0(VAR_7, "--stdin"))
   FUNC_2(((void*)0), VAR_0);
  else
   FUNC_2(((void*)0), VAR_1);

 } else {
  FUNC_1(VAR_5);
  FUNC_5("Ignoring stdin.");
  return VAR_8;
 }

 return VAR_2;
}
