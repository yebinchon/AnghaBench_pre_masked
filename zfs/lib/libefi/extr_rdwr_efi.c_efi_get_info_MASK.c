
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dk_cinfo {int dki_partition; void* dki_ctype; scalar_t__ dki_cname; scalar_t__ dki_dname; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char* FUNC_0 (int,int ) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct dk_cinfo*,int ,int) ;
 char* FUNC_4 (char*,int *) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,char*,scalar_t__,...) ;
 int VAR_12 ;
 int FUNC_7 (scalar_t__,char*) ;
 size_t FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_10(int VAR_13, struct dk_cinfo *VAR_14)
{
 char *VAR_15;
 char *VAR_16;
 int VAR_17 = 0;

 FUNC_3(VAR_14, 0, sizeof (*VAR_14));

 VAR_15 = FUNC_0(1, VAR_6);
 if (VAR_15 == ((void*)0))
  goto error;
 (void) FUNC_5(VAR_15, "/proc/self/fd/%d", VAR_13);
 VAR_16 = FUNC_4(VAR_15, ((void*)0));
 FUNC_2(VAR_15);

 if (VAR_16 == ((void*)0))
  goto error;

 if ((FUNC_9(VAR_16, "/dev/sd", 7) == 0)) {
  FUNC_7(VAR_14->dki_cname, "sd");
  VAR_14->dki_ctype = VAR_3;
  VAR_17 = FUNC_6(VAR_16, "/dev/%[a-zA-Z]%hu",
      VAR_14->dki_dname,
      &VAR_14->dki_partition);
 } else if ((FUNC_9(VAR_16, "/dev/hd", 7) == 0)) {
  FUNC_7(VAR_14->dki_cname, "hd");
  VAR_14->dki_ctype = VAR_0;
  VAR_17 = FUNC_6(VAR_16, "/dev/%[a-zA-Z]%hu",
      VAR_14->dki_dname,
      &VAR_14->dki_partition);
 } else if ((FUNC_9(VAR_16, "/dev/md", 7) == 0)) {
  FUNC_7(VAR_14->dki_cname, "pseudo");
  VAR_14->dki_ctype = VAR_1;
  FUNC_7(VAR_14->dki_dname, "md");
  VAR_17 = FUNC_6(VAR_16, "/dev/md%[0-9]p%hu",
      VAR_14->dki_dname + 2,
      &VAR_14->dki_partition);
 } else if ((FUNC_9(VAR_16, "/dev/vd", 7) == 0)) {
  FUNC_7(VAR_14->dki_cname, "vd");
  VAR_14->dki_ctype = VAR_1;
  VAR_17 = FUNC_6(VAR_16, "/dev/%[a-zA-Z]%hu",
      VAR_14->dki_dname,
      &VAR_14->dki_partition);
 } else if ((FUNC_9(VAR_16, "/dev/xvd", 8) == 0)) {
  FUNC_7(VAR_14->dki_cname, "xvd");
  VAR_14->dki_ctype = VAR_1;
  VAR_17 = FUNC_6(VAR_16, "/dev/%[a-zA-Z]%hu",
      VAR_14->dki_dname,
      &VAR_14->dki_partition);
 } else if ((FUNC_9(VAR_16, "/dev/zd", 7) == 0)) {
  FUNC_7(VAR_14->dki_cname, "zd");
  VAR_14->dki_ctype = VAR_1;
  FUNC_7(VAR_14->dki_dname, "zd");
  VAR_17 = FUNC_6(VAR_16, "/dev/zd%[0-9]p%hu",
      VAR_14->dki_dname + 2,
      &VAR_14->dki_partition);
 } else if ((FUNC_9(VAR_16, "/dev/dm-", 8) == 0)) {
  FUNC_7(VAR_14->dki_cname, "pseudo");
  VAR_14->dki_ctype = VAR_5;
  FUNC_7(VAR_14->dki_dname, "dm-");
  VAR_17 = FUNC_6(VAR_16, "/dev/dm-%[0-9]p%hu",
      VAR_14->dki_dname + 3,
      &VAR_14->dki_partition);
 } else if ((FUNC_9(VAR_16, "/dev/ram", 8) == 0)) {
  FUNC_7(VAR_14->dki_cname, "pseudo");
  VAR_14->dki_ctype = VAR_2;
  FUNC_7(VAR_14->dki_dname, "ram");
  VAR_17 = FUNC_6(VAR_16, "/dev/ram%[0-9]p%hu",
      VAR_14->dki_dname + 3,
      &VAR_14->dki_partition);
 } else if ((FUNC_9(VAR_16, "/dev/loop", 9) == 0)) {
  FUNC_7(VAR_14->dki_cname, "pseudo");
  VAR_14->dki_ctype = VAR_5;
  FUNC_7(VAR_14->dki_dname, "loop");
  VAR_17 = FUNC_6(VAR_16, "/dev/loop%[0-9]p%hu",
      VAR_14->dki_dname + 4,
      &VAR_14->dki_partition);
 } else if ((FUNC_9(VAR_16, "/dev/nvme", 9) == 0)) {
  FUNC_7(VAR_14->dki_cname, "nvme");
  VAR_14->dki_ctype = VAR_3;
  FUNC_7(VAR_14->dki_dname, "nvme");
  (void) FUNC_6(VAR_16, "/dev/nvme%[0-9]",
      VAR_14->dki_dname + 4);
  size_t VAR_18 = FUNC_8(
      VAR_14->dki_dname);
  FUNC_7(VAR_14->dki_dname + VAR_18,
      "n");
  VAR_17 = FUNC_6(VAR_16,
      "/dev/nvme%*[0-9]n%[0-9]p%hu",
      VAR_14->dki_dname + VAR_18 + 1,
      &VAR_14->dki_partition);
 } else {
  FUNC_7(VAR_14->dki_dname, "unknown");
  FUNC_7(VAR_14->dki_cname, "unknown");
  VAR_14->dki_ctype = VAR_4;
 }

 switch (VAR_17) {
 case 0:
  VAR_11 = 129;
  goto error;
 case 1:
  VAR_14->dki_partition = 0;
 }

 FUNC_2(VAR_16);

 return (0);
error:
 if (VAR_10)
  (void) FUNC_1(VAR_12, "DKIOCINFO errno 0x%x\n", VAR_11);

 switch (VAR_11) {
 case 128:
  return (VAR_8);
 case 129:
  return (VAR_7);
 default:
  return (VAR_9);
 }
}
