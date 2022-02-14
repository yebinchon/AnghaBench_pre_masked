
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct stat_array {int dummy; } ;
typedef int nvlist_t ;
struct TYPE_5__ {int cb_namewidth; scalar_t__ cb_scripted; int cb_flags; scalar_t__ cb_literal; } ;
typedef TYPE_1__ iostat_cbdata_t ;
typedef enum iostat_type { ____Placeholder_iostat_type } iostat_type ;


 size_t FUNC_0 (int ) ;
 unsigned int FUNC_1 (int,unsigned int) ;
 struct stat_array* FUNC_2 (char const**,unsigned int,int *,int *) ;
 int FUNC_3 (struct stat_array*,unsigned int) ;
 int * VAR_0 ;
 int * VAR_1 ;
 unsigned int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,unsigned int,char const*) ;
 int FUNC_7 (struct stat_array*,unsigned int,TYPE_1__*,unsigned int,unsigned int,double) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (char*,char const*) ;
 int FUNC_10 (struct stat_array*,unsigned int) ;
 unsigned int FUNC_11 (char const**) ;
 unsigned int FUNC_12 (int ) ;
 char*** VAR_2 ;

__attribute__((used)) static void
FUNC_13(iostat_cbdata_t *VAR_3, nvlist_t *VAR_4,
    nvlist_t *VAR_5, double VAR_6, const char *VAR_7)
{
 unsigned int VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10;
 enum iostat_type VAR_11;
 struct stat_array *VAR_12;
 const char **VAR_13;
 unsigned int VAR_14;


 VAR_11 = FUNC_0(VAR_3->cb_flags);


 VAR_13 = VAR_2[VAR_11];
 VAR_14 = FUNC_11(VAR_13);

 VAR_12 = FUNC_2(VAR_13, VAR_14, VAR_4, VAR_5);

 if (VAR_3->cb_literal) {
  VAR_8 = FUNC_1(5,
      (unsigned int) FUNC_5(FUNC_10(VAR_12, VAR_14)) + 1);
 } else {
  VAR_8 = 5;
 }

 VAR_9 = FUNC_1(VAR_3->cb_namewidth,
     FUNC_12(VAR_0[FUNC_0(VAR_3->cb_flags)]));
 VAR_10 = VAR_9 + (VAR_8 + 2) *
     FUNC_4(VAR_1[VAR_11]);

 if (VAR_3->cb_scripted)
  FUNC_9("%s\n", VAR_7);
 else
  FUNC_6(VAR_3, VAR_8, VAR_7);

 FUNC_7(VAR_12, VAR_14, VAR_3, VAR_8,
     VAR_9, VAR_6);

 FUNC_3(VAR_12, VAR_14);
 if (!VAR_3->cb_scripted)
  FUNC_8(VAR_10);
}
