
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int randValue ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int,unsigned long*,int) ;

__attribute__((used)) static unsigned long FUNC_4()
{
  int VAR_1 = FUNC_2("/dev/urandom", VAR_0);
  unsigned long VAR_2;
  if (VAR_1 < 0) {
    FUNC_0("Unable to open /dev/urandom");
  }
  ssize_t VAR_3 = FUNC_3(VAR_1, &VAR_2, sizeof(VAR_2));
  if (VAR_3 < sizeof(VAR_2)) {
    FUNC_0("Unable to read from /dev/urandom");
  }
  FUNC_1(VAR_1);
  return VAR_2;
}
