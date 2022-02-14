
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* zc_name; int zc_cookie; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int objset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int,char*,int *,int *) ;
 int FUNC_2 (char*,int ,int **) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (char*,char) ;
 int FUNC_5 (char*,char*,int) ;
 size_t FUNC_6 (char*) ;
 char* FUNC_7 (char*,char) ;
 scalar_t__ FUNC_8 (char*) ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_10(zfs_cmd_t *VAR_3)
{
 objset_t *VAR_4;
 int VAR_5;
 char *VAR_6;
 size_t VAR_7 = FUNC_6(VAR_3->zc_name);

top:
 if ((VAR_5 = FUNC_2(VAR_3->zc_name, VAR_2, &VAR_4))) {
  if (VAR_5 == VAR_0)
   VAR_5 = FUNC_0(VAR_1);
  return (VAR_5);
 }

 VAR_6 = FUNC_7(VAR_3->zc_name, '/');
 if (VAR_6 == ((void*)0) || VAR_6[1] != '\0')
  (void) FUNC_5(VAR_3->zc_name, "/", sizeof (VAR_3->zc_name));
 VAR_6 = VAR_3->zc_name + FUNC_6(VAR_3->zc_name);

 do {
  VAR_5 = FUNC_1(VAR_4,
      sizeof (VAR_3->zc_name) - (VAR_6 - VAR_3->zc_name), VAR_6,
      ((void*)0), &VAR_3->zc_cookie);
  if (VAR_5 == VAR_0)
   VAR_5 = FUNC_0(VAR_1);
 } while (VAR_5 == 0 && FUNC_8(VAR_3->zc_name));
 FUNC_3(VAR_4, VAR_2);





 if (VAR_5 == 0 && FUNC_4(VAR_3->zc_name, '$') == ((void*)0)) {
  VAR_5 = FUNC_9(VAR_3);
  if (VAR_5 == VAR_0) {

   VAR_3->zc_name[VAR_7] = '\0';
   goto top;
  }
 }
 return (VAR_5);
}
