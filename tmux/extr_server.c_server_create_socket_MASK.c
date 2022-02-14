
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
typedef int mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct sockaddr_un*,int ,int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_7 ;
 int FUNC_6 (int) ;
 size_t FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char**,char*,int ,int ) ;

__attribute__((used)) static int
FUNC_11(char **VAR_8)
{
 struct sockaddr_un VAR_9;
 size_t VAR_10;
 mode_t VAR_11;
 int VAR_12, VAR_13;

 FUNC_3(&VAR_9, 0, sizeof VAR_9);
 VAR_9.sun_family = VAR_0;
 VAR_10 = FUNC_7(VAR_9.sun_path, VAR_7, sizeof VAR_9.sun_path);
 if (VAR_10 >= sizeof VAR_9.sun_path) {
  VAR_6 = VAR_1;
  goto fail;
 }
 FUNC_9(VAR_9.sun_path);

 if ((VAR_12 = FUNC_5(VAR_0, VAR_2, 0)) == -1)
  goto fail;

 VAR_11 = FUNC_8(VAR_5|VAR_4|VAR_3);
 if (FUNC_0(VAR_12, (struct sockaddr *)&VAR_9, sizeof VAR_9) == -1) {
  VAR_13 = VAR_6;
  FUNC_1(VAR_12);
  VAR_6 = VAR_13;
  goto fail;
 }
 FUNC_8(VAR_11);

 if (FUNC_2(VAR_12, 128) == -1) {
  VAR_13 = VAR_6;
  FUNC_1(VAR_12);
  VAR_6 = VAR_13;
  goto fail;
 }
 FUNC_4(VAR_12, 0);

 return (VAR_12);

fail:
 if (VAR_8 != ((void*)0)) {
  FUNC_10(VAR_8, "error creating %s (%s)", VAR_7,
      FUNC_6(VAR_6));
 }
 return (-1);
}
