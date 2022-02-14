
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long int64_t ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 unsigned char FUNC_0 (char*) ;
 unsigned char* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,...) ;
 long FUNC_4 (int,unsigned char**,int) ;

int
FUNC_5(int VAR_5, char **VAR_6)
{
 int VAR_7;
 long VAR_8, VAR_9;
 unsigned char VAR_10 = VAR_1;
 int VAR_11 = VAR_0;
 int64_t VAR_12 = 0;




 if (VAR_5 < 2) {
  (void) FUNC_3("Usage: %s filename [pattern]\n",
      VAR_6[0]);
  FUNC_1(1);
 }

 if (VAR_6[2]) {
  VAR_10 = FUNC_0(VAR_6[2]);
 }






 if ((VAR_7 = FUNC_2(VAR_6[1], VAR_2)) == -1) {
  (void) FUNC_3("open %s failed %d\n", VAR_6[1], VAR_4);
  FUNC_1(1);
 }

 do {
  if ((VAR_9 = FUNC_4(VAR_7, &VAR_3, VAR_11)) == -1) {
   (void) FUNC_3("read failed (%ld), %d\n", VAR_9, VAR_4);
   FUNC_1(VAR_4);
  }

  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
   if (VAR_3[VAR_8] != VAR_10) {
    (void) FUNC_3("error %s: 0x%x != 0x%x)\n",
        VAR_6[1], VAR_3[VAR_8], VAR_10);
    FUNC_1(1);
   }
  }

  VAR_12 += VAR_9;
 } while (VAR_9 == VAR_11);

 return (0);
}
