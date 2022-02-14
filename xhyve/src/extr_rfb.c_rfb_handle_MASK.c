
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint32_t ;
struct rfb_softc {int cfd; int zstream; scalar_t__ enc_zlib_ok; int * zbuf; scalar_t__ password; } ;
typedef int ssize_t ;
typedef int * pthread_t ;
typedef int challenge ;
typedef int buf ;
typedef int CCCryptorStatus ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,unsigned char*,int,int *,unsigned char*,int,unsigned char*,int,size_t*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;


 int FUNC_2 (char*) ;
 int FUNC_3 (unsigned char*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (unsigned char*,char) ;
 int FUNC_6 (int *) ;
 char FUNC_7 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_8 (scalar_t__) ;
 int FUNC_9 (unsigned char*,unsigned char*,int) ;
 int FUNC_10 (unsigned char*,unsigned char*,int) ;
 int FUNC_11 (int **,int *,int ,struct rfb_softc*) ;
 int FUNC_12 (int *,int *) ;
 long FUNC_13 (int,unsigned char*,int) ;
 int FUNC_14 (struct rfb_softc*,int) ;
 int FUNC_15 (struct rfb_softc*,int) ;
 int FUNC_16 (struct rfb_softc*,int) ;
 int FUNC_17 (struct rfb_softc*,int) ;
 int FUNC_18 (struct rfb_softc*,int) ;
 int FUNC_19 (struct rfb_softc*,int,int) ;
 int FUNC_20 (struct rfb_softc*,int,int) ;
 int FUNC_21 (int) ;
 int VAR_7 ;
 long FUNC_22 (int,unsigned char*,int) ;
 int FUNC_23 (int,...) ;
 scalar_t__ FUNC_24 (char const*) ;
 int FUNC_25 (char*,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_26(struct rfb_softc *VAR_8, int VAR_9)
{
 const char *VAR_10 = "RFB 003.008\n";
 unsigned char VAR_11[80];
 char *VAR_12 = ((void*)0);

 unsigned char VAR_13[VAR_0];
 unsigned char VAR_14[VAR_1];
 unsigned char VAR_15[VAR_0];

    size_t VAR_16;
    int VAR_17;
    CCCryptorStatus VAR_18;

 pthread_t VAR_19 = ((void*)0);
 uint32_t VAR_20 = 0;
 long VAR_21;
 int VAR_22 = 1;

 VAR_8->cfd = VAR_9;


 FUNC_23(VAR_9, VAR_10, (ssize_t)FUNC_24(VAR_10));


 VAR_21 = FUNC_13(VAR_9, VAR_11, sizeof(VAR_11));


 VAR_11[0] = 1;
 if (VAR_8->password)
  VAR_11[1] = 128;
 else
  VAR_11[1] = 129;

 FUNC_23(VAR_9, VAR_11, 2);


 VAR_21 = FUNC_22(VAR_9, VAR_11, 1);


 switch (VAR_11[0]) {
 case 129:
  VAR_20 = 0;
  break;
 case 128:







  FUNC_25((char *)VAR_14, VAR_8->password, VAR_1);





  for (VAR_17 = 0; VAR_17 < VAR_1; VAR_17++) {
   VAR_14[VAR_17] = (VAR_14[VAR_17] & 0xF0) >> 4
      | (unsigned char)((VAR_14[VAR_17] & 0x0F) << 4);
   VAR_14[VAR_17] = (VAR_14[VAR_17] & 0xCC) >> 2
      | (unsigned char)((VAR_14[VAR_17] & 0x33) << 2);
   VAR_14[VAR_17] = (VAR_14[VAR_17] & 0xAA) >> 1
      | (unsigned char)((VAR_14[VAR_17] & 0x55) << 1);
  }


  FUNC_3(VAR_13, sizeof(VAR_13));
  FUNC_23(VAR_9, VAR_13, VAR_0);


  FUNC_22(VAR_9, VAR_11, VAR_0);

  FUNC_10(VAR_15, VAR_13, VAR_0);

        VAR_18 = FUNC_0(VAR_4, VAR_3, VAR_5,
                               VAR_14, VAR_1,
                               ((void*)0),
                               VAR_13, VAR_0,
                               VAR_15, VAR_0,
                               &VAR_16);

        if (VAR_18 != VAR_6) {
            VAR_12 = "Auth Failed: Internal Error.";
            VAR_20 = FUNC_7(1);
        } else if (FUNC_9(VAR_15, VAR_11, VAR_0) != 0) {
   VAR_12 = "Auth Failed: Invalid Password.";
   VAR_20 = FUNC_7(1);
        } else {
   VAR_20 = 0;
        }
        break;
 }


 FUNC_23(VAR_9, &VAR_20, 4);

 if (VAR_20) {
  FUNC_5(VAR_11, (uint32_t)FUNC_24(VAR_12));
  FUNC_23(VAR_9, VAR_11, 4);
  FUNC_23(VAR_9, VAR_12, (ssize_t)FUNC_24(VAR_12));
  goto done;
 }


 VAR_21 = FUNC_22(VAR_9, VAR_11, 1);


 FUNC_21(VAR_9);

 if (!VAR_8->zbuf) {
  VAR_8->zbuf = FUNC_8(VAR_2 + 16);
  FUNC_4(VAR_8->zbuf != ((void*)0));
 }

 FUNC_20(VAR_8, VAR_9, 1);

 VAR_22 = FUNC_11(&VAR_19, ((void*)0), VAR_7, VAR_8);
    if (VAR_22 != 0) {
        goto done;
    }


 for (;;) {
  VAR_21 = FUNC_13(VAR_9, VAR_11, 1);
  if (VAR_21 <= 0) {
   FUNC_1(("rfb client exiting\r\n"));
   break;
  }

  switch (VAR_11[0]) {
  case 0:
   FUNC_18(VAR_8, VAR_9);
   break;
  case 2:
   FUNC_17(VAR_8, VAR_9);
   break;
  case 3:
   FUNC_19(VAR_8, VAR_9, 1);
   break;
  case 4:
   FUNC_15(VAR_8, VAR_9);
   break;
  case 5:
   FUNC_16(VAR_8, VAR_9);
   break;
  case 6:
   FUNC_14(VAR_8, VAR_9);
   break;
  default:
   FUNC_2(("rfb unknown cli-code %d!\n", VAR_11[0] & 0xff));
   goto done;
  }
 }
done:
 VAR_8->cfd = -1;
 if (VAR_22 == 0)
  FUNC_12(VAR_19, ((void*)0));
 if (VAR_8->enc_zlib_ok)
  FUNC_6(&VAR_8->zstream);
}
