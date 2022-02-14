
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int off_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,size_t,size_t) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int,void const*,size_t,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(int VAR_2, const void *VAR_3, size_t VAR_4, off_t VAR_5)
{
 size_t VAR_6 = VAR_4;
 ssize_t VAR_7 = 0;

 VAR_7 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_7 < 0) {
  FUNC_2("pwrite");
  FUNC_0(VAR_0);
 }

 VAR_6 -= VAR_7;
 if (VAR_6 != 0) {
  (void) FUNC_1(VAR_1, "warning: pwrite: "
      "wrote %zu out of %zu bytes\n",
      (VAR_4 - VAR_6), VAR_4);
 }
}
