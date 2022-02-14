
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(void)
{
 int VAR_4 = 0, VAR_5 = 0;

 (void) FUNC_0(VAR_2, &VAR_4);
 if (VAR_4 > 0) {
  VAR_5 += VAR_4;
  (void) FUNC_1("\n");
  VAR_4 = 0;
 }

 (void) FUNC_0(VAR_1, &VAR_4);
 if (VAR_4 > 0) {
  VAR_5 += VAR_4;
  (void) FUNC_1("\n");
  VAR_4 = 0;
 }

 (void) FUNC_0(VAR_0, &VAR_4);
 if (VAR_4 > 0) {
  VAR_5 += VAR_4;
  (void) FUNC_1("\n");
  VAR_4 = 0;
 }

 (void) FUNC_0(VAR_3, &VAR_4);

 return (VAR_4 + VAR_5);
}
