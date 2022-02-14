
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct stat_array {int count; int data; } ;
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
 struct stat_array* FUNC_1 (char const**,int,int *,int *) ;
 unsigned int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (struct stat_array*,int) ;
 int FUNC_4 (int ,int,unsigned int,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void
FUNC_6(iostat_cbdata_t *VAR_13, nvlist_t *VAR_14,
    nvlist_t *VAR_15)
{
 int VAR_16;
 uint64_t VAR_17;
 const char *VAR_18[] = {
  VAR_10,
  VAR_11,
  VAR_5,
  VAR_6,
  VAR_8,
  VAR_9,
  VAR_3,
  VAR_4,
  VAR_7,
  VAR_12,
 };
 struct stat_array *VAR_19;

 unsigned int VAR_20 = FUNC_2(VAR_13, VAR_0);
 enum zfs_nicenum_format VAR_21;

 VAR_19 = FUNC_1(VAR_18, FUNC_0(VAR_18), VAR_14, VAR_15);

 if (VAR_13->cb_literal)
  VAR_21 = VAR_1;
 else
  VAR_21 = VAR_2;


 for (VAR_16 = 0; VAR_16 < FUNC_0(VAR_18); VAR_16++) {

  VAR_17 = FUNC_5(VAR_19[VAR_16].data, VAR_19[VAR_16].count);
  FUNC_4(VAR_17, VAR_21, VAR_20, VAR_13->cb_scripted);
 }
 FUNC_3(VAR_19, FUNC_0(VAR_18));
}
