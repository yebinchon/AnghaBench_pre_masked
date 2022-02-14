
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct stat_array {int * data; } ;
typedef int nvlist_t ;
struct TYPE_4__ {int cb_scripted; scalar_t__ cb_literal; } ;
typedef TYPE_1__ iostat_cbdata_t ;
typedef enum zfs_nicenum_format { ____Placeholder_zfs_nicenum_format } zfs_nicenum_format ;


 int FUNC_0 (char const**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char const* VAR_3 ;
 char const* VAR_4 ;
 char const* VAR_5 ;
 char const* VAR_6 ;
 char const* VAR_7 ;
 char const* VAR_8 ;
 char const* VAR_9 ;
 char const* VAR_10 ;
 char const* VAR_11 ;
 char const* VAR_12 ;
 char const* VAR_13 ;
 char const* VAR_14 ;
 struct stat_array* FUNC_1 (char const**,int,int *,int *) ;
 unsigned int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (struct stat_array*,int) ;
 int FUNC_4 (int ,int,unsigned int,int ) ;

__attribute__((used)) static void
FUNC_5(iostat_cbdata_t *VAR_15, nvlist_t *VAR_16,
    nvlist_t *VAR_17)
{
 int VAR_18;
 uint64_t VAR_19;
 const char *VAR_20[] = {
  VAR_10,
  VAR_9,
  VAR_12,
  VAR_11,
  VAR_4,
  VAR_3,
  VAR_6,
  VAR_5,
  VAR_8,
  VAR_7,
  VAR_14,
  VAR_13,
 };

 struct stat_array *VAR_21;

 unsigned int VAR_22 = FUNC_2(VAR_15, VAR_0);
 enum zfs_nicenum_format VAR_23;

 VAR_21 = FUNC_1(VAR_20, FUNC_0(VAR_20), ((void*)0), VAR_17);

 if (VAR_15->cb_literal)
  VAR_23 = VAR_2;
 else
  VAR_23 = VAR_1;

 for (VAR_18 = 0; VAR_18 < FUNC_0(VAR_20); VAR_18++) {
  VAR_19 = VAR_21[VAR_18].data[0];
  FUNC_4(VAR_19, VAR_23, VAR_22, VAR_15->cb_scripted);
 }

 FUNC_3(VAR_21, FUNC_0(VAR_20));
}
