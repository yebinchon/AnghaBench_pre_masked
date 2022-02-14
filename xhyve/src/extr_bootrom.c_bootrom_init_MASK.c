
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (int,struct stat*) ;
 int FUNC_3 (char const*,int ) ;
 int FUNC_4 (int,char*,int) ;
 int VAR_5 ;
 char* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (size_t,void**) ;

int
FUNC_7(const char *VAR_6)
{
 struct stat VAR_7;
 ssize_t VAR_8;
 char *VAR_9;
 int VAR_10, VAR_11, VAR_12;

 VAR_12 = -1;
 VAR_10 = FUNC_3(VAR_6, VAR_1);
 if (VAR_10 < 0) {
  FUNC_1(VAR_5, "Error opening bootrom \"%s\": %s\n",
      VAR_6, FUNC_5(VAR_4));
  goto done;
 }

        if (FUNC_2(VAR_10, &VAR_7) < 0) {
  FUNC_1(VAR_5, "Could not fstat bootrom file \"%s\": %s\n",
      VAR_6, FUNC_5(VAR_4));
  goto done;
        }





 if (VAR_7.st_size > VAR_0 || VAR_7.st_size < VAR_3) {
  FUNC_1(VAR_5, "Invalid bootrom size %d\n", VAR_7.st_size);
  goto done;
 }

 if (VAR_7.st_size & VAR_2) {
  FUNC_1(VAR_5, "Bootrom size %d is not a multiple of the "
      "page size\n", VAR_7.st_size);
  goto done;
 }


 if (FUNC_6((size_t)VAR_7.st_size, (void **)&VAR_9) != 0)
    {
        FUNC_1(VAR_5, "hv_setup_bootrom_memory failed\n");
  goto done;
    }


 for (VAR_11 = 0; VAR_11 < VAR_7.st_size / VAR_3; VAR_11++) {
  VAR_8 = FUNC_4(VAR_10, VAR_9 + VAR_11 * VAR_3, VAR_3);
  if (VAR_8 != VAR_3) {
   FUNC_1(VAR_5, "Incomplete read of page %d of bootrom "
       "file %s: %zd bytes\n", VAR_11, VAR_6, VAR_8);
   goto done;
  }
 }
 VAR_12 = 0;
done:
 if (VAR_10 >= 0)
  FUNC_0(VAR_10);
 return (VAR_12);
}
