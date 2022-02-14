
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long long* zc_word; } ;
typedef TYPE_1__ zio_cksum_t ;
typedef unsigned long long uLongf ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (unsigned char*,int,TYPE_1__*) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (void*,unsigned long long,int **,int ) ;
 int FUNC_4 (char const*,char*,...) ;
 int FUNC_5 (char const*) ;
 char* FUNC_6 (char const*,char) ;
 scalar_t__ FUNC_7 (void*,unsigned long long*,unsigned char*,int) ;
 void* FUNC_8 (int *,unsigned long long) ;
 int FUNC_9 (int *,int ,...) ;

nvlist_t *
FUNC_10(libzfs_handle_t *VAR_4, const char *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7, VAR_8;
 unsigned long long VAR_9, VAR_10;






 VAR_7 = FUNC_4(VAR_5, "%u-%llx-%llx-",
     &VAR_6, &VAR_9, &VAR_10);
 if (VAR_7 != 3) {
  FUNC_9(VAR_4, FUNC_0(VAR_1,
      "resume token is corrupt (invalid format)"));
  return (((void*)0));
 }

 if (VAR_6 != VAR_2) {
  FUNC_9(VAR_4, FUNC_0(VAR_1,
      "resume token is corrupt (invalid version %u)"),
      VAR_6);
  return (((void*)0));
 }


 VAR_5 = FUNC_6(VAR_5, '-') + 1;
 int VAR_11 = FUNC_5(VAR_5) / 2;
 unsigned char *VAR_12 = FUNC_8(VAR_4, VAR_11);
 for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8++) {
  VAR_7 = FUNC_4(VAR_5 + VAR_8 * 2, "%2hhx", VAR_12 + VAR_8);
  if (VAR_7 != 1) {
   FUNC_2(VAR_12);
   FUNC_9(VAR_4, FUNC_0(VAR_1,
       "resume token is corrupt "
       "(payload is not hex-encoded)"));
   return (((void*)0));
  }
 }


 zio_cksum_t VAR_13;
 FUNC_1(VAR_12, VAR_11, &VAR_13);
 if (VAR_13.zc_word[0] != VAR_9) {
  FUNC_2(VAR_12);
  FUNC_9(VAR_4, FUNC_0(VAR_1,
      "resume token is corrupt (incorrect checksum)"));
  return (((void*)0));
 }


 void *VAR_14 = FUNC_8(VAR_4, VAR_10);
 uLongf VAR_15 = VAR_10;
 if (FUNC_7(VAR_14, &VAR_15, VAR_12, VAR_11) != VAR_3 ||
     VAR_15 != VAR_10) {
  FUNC_2(VAR_14);
  FUNC_2(VAR_12);
  FUNC_9(VAR_4, FUNC_0(VAR_1,
      "resume token is corrupt (decompression failed)"));
  return (((void*)0));
 }


 nvlist_t *VAR_16;
 int VAR_17 = FUNC_3(VAR_14, VAR_10, &VAR_16, VAR_0);
 FUNC_2(VAR_14);
 FUNC_2(VAR_12);
 if (VAR_17 != 0) {
  FUNC_9(VAR_4, FUNC_0(VAR_1,
      "resume token is corrupt (nvlist_unpack failed)"));
  return (((void*)0));
 }
 return (VAR_16);
}
