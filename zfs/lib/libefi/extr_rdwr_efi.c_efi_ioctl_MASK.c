
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint_t ;
struct TYPE_3__ {int dki_lba; int dki_length; void* dki_data; } ;
typedef TYPE_1__ dk_efi_t ;
typedef int diskaddr_t ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int,int,int ) ;
 int FUNC_4 (int,void*,int) ;
 int FUNC_5 (int,int *,int*) ;
 int VAR_6 ;
 int FUNC_6 (int,void*,int) ;

__attribute__((used)) static int
FUNC_7(int VAR_7, int VAR_8, dk_efi_t *VAR_9)
{
 void *VAR_10 = VAR_9->dki_data;
 int VAR_11;
 diskaddr_t VAR_12;
 uint_t VAR_13;





 if (FUNC_5(VAR_7, &VAR_12, &VAR_13) == -1) {
  if (VAR_4)
   FUNC_0(VAR_6, "unable to read disk info: %d", VAR_5);

  VAR_5 = VAR_2;
  return (-1);
 }

 switch (VAR_8) {
 case 129:
  if (VAR_13 == 0) {
   if (VAR_4)
    (void) FUNC_0(VAR_6, "DKIOCGETEFI assuming "
        "LBA %d bytes\n", VAR_1);

   VAR_13 = VAR_1;
  }

  VAR_11 = FUNC_3(VAR_7, VAR_9->dki_lba * VAR_13, VAR_3);
  if (VAR_11 == -1) {
   if (VAR_4)
    (void) FUNC_0(VAR_6, "DKIOCGETEFI lseek "
        "error: %d\n", VAR_5);
   return (VAR_11);
  }

  VAR_11 = FUNC_4(VAR_7, VAR_10, VAR_9->dki_length);
  if (VAR_11 == -1) {
   if (VAR_4)
    (void) FUNC_0(VAR_6, "DKIOCGETEFI read "
        "error: %d\n", VAR_5);
   return (VAR_11);
  }

  if (VAR_11 != VAR_9->dki_length) {
   if (VAR_4)
    (void) FUNC_0(VAR_6, "DKIOCGETEFI short "
        "read of %d bytes\n", VAR_11);
   VAR_5 = VAR_2;
   return (-1);
  }
  VAR_11 = 0;
  break;

 case 128:
  if (VAR_13 == 0) {
   if (VAR_4)
    (void) FUNC_0(VAR_6, "DKIOCSETEFI unknown "
        "LBA size\n");
   VAR_5 = VAR_2;
   return (-1);
  }

  VAR_11 = FUNC_3(VAR_7, VAR_9->dki_lba * VAR_13, VAR_3);
  if (VAR_11 == -1) {
   if (VAR_4)
    (void) FUNC_0(VAR_6, "DKIOCSETEFI lseek "
        "error: %d\n", VAR_5);
   return (VAR_11);
  }

  VAR_11 = FUNC_6(VAR_7, VAR_10, VAR_9->dki_length);
  if (VAR_11 == -1) {
   if (VAR_4)
    (void) FUNC_0(VAR_6, "DKIOCSETEFI write "
        "error: %d\n", VAR_5);
   return (VAR_11);
  }

  if (VAR_11 != VAR_9->dki_length) {
   if (VAR_4)
    (void) FUNC_0(VAR_6, "DKIOCSETEFI short "
        "write of %d bytes\n", VAR_11);
   VAR_5 = VAR_2;
   return (-1);
  }


  VAR_11 = FUNC_1(VAR_7);
  if (VAR_11 == -1)
   return (VAR_11);


  if (FUNC_2(VAR_7, VAR_0, 0) == -1)
   return (VAR_11);

  VAR_11 = 0;
  break;

 default:
  if (VAR_4)
   (void) FUNC_0(VAR_6, "unsupported ioctl()\n");

  VAR_5 = VAR_2;
  return (-1);
 }

 return (VAR_11);
}
