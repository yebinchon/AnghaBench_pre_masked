
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_0 (int,size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int ,size_t,int,int ,int,int ) ;
 scalar_t__ FUNC_6 (char*,size_t,int ) ;
 scalar_t__ FUNC_7 (char*,size_t) ;
 int FUNC_8 (char*,int,int) ;
 int VAR_8 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int,char*,size_t,int ) ;
 int FUNC_11 (char*,size_t,...) ;
 size_t FUNC_12 () ;
 int FUNC_13 (char*) ;
 int FUNC_14 (unsigned int) ;
 int VAR_9 ;
 unsigned int FUNC_15 (int *) ;
 int FUNC_16 (int,char*,size_t) ;

int
FUNC_17(int VAR_10, char **VAR_11)
{
 char *VAR_12 = "badfile";
 size_t VAR_13 = 4395;
 size_t VAR_14 = 0;
 char *VAR_15 = ((void*)0);
 char *VAR_16 = ((void*)0);
 int VAR_17 = -1, VAR_18, VAR_19 = 0;
 unsigned VAR_20;

 if (VAR_10 < 2 || VAR_8 == VAR_10) {
  (void) FUNC_3(VAR_9,
      "usage: %s <file name>\n", VAR_11[0]);
  FUNC_2(1);
 }

 if ((VAR_15 = FUNC_0(1, VAR_13)) == ((void*)0)) {
  FUNC_9("calloc");
  FUNC_2(1);
 }

 VAR_12 = VAR_11[VAR_8];

 (void) FUNC_13(VAR_12);

 VAR_17 = FUNC_8(VAR_12, VAR_4|VAR_3|VAR_5, 0666);
 if (VAR_17 == -1) {
  FUNC_9("open to create");
  VAR_19 = 1;
  goto end;
 }

 VAR_18 = FUNC_16(VAR_17, VAR_15, VAR_13);
 if (VAR_18 != VAR_13) {
  (void) FUNC_11("short write: %d != %zd\n", VAR_18, VAR_13);
  VAR_19 = 1;
  goto end;
 }

 VAR_16 = FUNC_5(0, VAR_13, VAR_6|VAR_7, VAR_1, VAR_17, 0);
 if (VAR_16 == VAR_0) {
  FUNC_9("mmap");
  VAR_19 = 1;
  goto end;
 }
 VAR_20 = FUNC_15(((void*)0));
 FUNC_14(VAR_20);

 VAR_14 = FUNC_12() % VAR_13;
 VAR_16[VAR_14] = 1;

 if (FUNC_6(VAR_16, VAR_13, VAR_2) != 0) {
  FUNC_9("msync");
  VAR_19 = 1;
  goto end;
 }

 if (FUNC_7(VAR_16, VAR_13) != 0) {
  FUNC_9("munmap");
  VAR_19 = 1;
  goto end;
 }

 VAR_18 = FUNC_10(VAR_17, VAR_15, VAR_13, 0);
 if (VAR_18 != VAR_13) {
  (void) FUNC_11("short read: %d != %zd\n", VAR_18, VAR_13);
  VAR_19 = 1;
  goto end;
 }

 if (VAR_15[VAR_14] != 1) {
  (void) FUNC_11(
      "bad data from read!  got buf[%zd]=%d, expected 1\n",
      VAR_14, VAR_15[VAR_14]);
  VAR_19 = 1;
  goto end;
 }

 (void) FUNC_11("good data from read: buf[%zd]=1\n", VAR_14);
end:
 if (VAR_17 != -1) {
  (void) FUNC_1(VAR_17);
 }
 if (VAR_15 != ((void*)0)) {
  FUNC_4(VAR_15);
 }

 return (VAR_19);
}
