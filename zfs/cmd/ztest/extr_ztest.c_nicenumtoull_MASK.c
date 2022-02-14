
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 double VAR_1 ;
 int FUNC_0 (int ,char*,char const*) ;
 double FUNC_1 (int,int) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 double FUNC_3 (char const*,char**) ;
 int FUNC_4 (char const*,char**,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static uint64_t
FUNC_6(const char *VAR_3)
{
 char *VAR_4;
 uint64_t VAR_5;

 VAR_5 = FUNC_4(VAR_3, &VAR_4, 0);
 if (VAR_4 == VAR_3) {
  (void) FUNC_0(VAR_2, "ztest: bad numeric value: %s\n", VAR_3);
  FUNC_5(VAR_0);
 } else if (VAR_4[0] == '.') {
  double VAR_6 = FUNC_3(VAR_3, &VAR_4);
  VAR_6 *= FUNC_1(2, FUNC_2(VAR_4));
  if (VAR_6 > VAR_1) {
   (void) FUNC_0(VAR_2, "ztest: value too large: %s\n",
       VAR_3);
   FUNC_5(VAR_0);
  }
  VAR_5 = (uint64_t)VAR_6;
 } else {
  int VAR_7 = FUNC_2(VAR_4);
  if (VAR_7 >= 64 || (VAR_5 << VAR_7) >> VAR_7 != VAR_5) {
   (void) FUNC_0(VAR_2, "ztest: value too large: %s\n",
       VAR_3);
   FUNC_5(VAR_0);
  }
  VAR_5 <<= VAR_7;
 }
 return (VAR_5);
}
