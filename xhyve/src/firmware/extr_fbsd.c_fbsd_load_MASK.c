
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
typedef int (* func_t ) (int *,int *,int ,int) ;
struct TYPE_8__ {char* kernelenv; scalar_t__ cons; int userboot; scalar_t__ bootvolume; } ;
struct TYPE_7__ {int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__) ;
 TYPE_5__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__* VAR_10 ;
 int FUNC_5 (scalar_t__) ;
 char* FUNC_6 () ;
 void* FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (void*,char*) ;
 int VAR_11 ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,char*,...) ;
 int * VAR_12 ;
 int VAR_13 ;
 TYPE_1__ VAR_14 ;
 int FUNC_11 (int ) ;
 int VAR_15 ;
 int FUNC_12 (scalar_t__,TYPE_1__*) ;
 int FUNC_13 (scalar_t__,int ,TYPE_1__*) ;
 TYPE_1__ VAR_16 ;
 int VAR_17 ;

uint64_t
FUNC_14(void)
{
 void *VAR_18;
 int VAR_19;
 func_t VAR_20;

 VAR_12 = ((void*)0);
 VAR_8 = VAR_2;
 VAR_9 = VAR_3;

 if (VAR_7.cons) {
  FUNC_1(VAR_7.cons);
 }

 if (VAR_7.bootvolume) {
  FUNC_5(VAR_7.bootvolume);
 } else {
  FUNC_10(VAR_15, "fbsd: no boot volume\n");
  FUNC_9(-1);
 }

 if (VAR_7.kernelenv) {
  FUNC_0(VAR_7.kernelenv);
 }



 FUNC_12(VAR_9, &VAR_16);
 VAR_14 = VAR_16;
 FUNC_3(&VAR_16);
 VAR_16.c_cflag |= VAR_0;

 FUNC_13(VAR_9, VAR_4, &VAR_16);

 VAR_18 = FUNC_7(VAR_7.userboot, VAR_1);
 if (!VAR_18) {
  FUNC_10(VAR_15, "%s\n", FUNC_6());
  FUNC_9(-1);
 }

 VAR_20 = (func_t) FUNC_8(VAR_18, "loader_main");
 if (!VAR_20) {
  FUNC_10(VAR_15, "%s\n", FUNC_6());
  FUNC_9(-1);
 }

 FUNC_0("smbios.bios.vendor=BHYVE");
 FUNC_0("boot_serial=1");

 if (!FUNC_11(VAR_11)) {
  VAR_20(&VAR_6, ((void*)0), VAR_5, VAR_13);
 }

 for (VAR_19 = 0; VAR_19 < VAR_13; VAR_19++) {
  FUNC_4(VAR_10[VAR_19]);
 }

 if (VAR_7.cons) {
  FUNC_2(VAR_8 == VAR_9);
  FUNC_4(VAR_8);
 }

 return VAR_17;
}
