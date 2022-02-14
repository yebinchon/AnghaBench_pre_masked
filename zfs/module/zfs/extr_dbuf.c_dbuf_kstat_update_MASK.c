
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_16__ ;
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_20__ {TYPE_14__* ks_data; } ;
typedef TYPE_13__ kstat_t ;
struct TYPE_18__ {int ui64; } ;
struct TYPE_19__ {TYPE_11__ value; } ;
struct TYPE_31__ {int ui64; } ;
struct TYPE_17__ {TYPE_9__ value; } ;
struct TYPE_29__ {int ui64; } ;
struct TYPE_30__ {TYPE_7__ value; } ;
struct TYPE_27__ {int ui64; } ;
struct TYPE_28__ {TYPE_5__ value; } ;
struct TYPE_25__ {void* ui64; } ;
struct TYPE_26__ {TYPE_3__ value; } ;
struct TYPE_23__ {void* ui64; } ;
struct TYPE_24__ {TYPE_1__ value; } ;
struct TYPE_21__ {TYPE_12__ hash_elements; TYPE_10__ cache_lowater_bytes; TYPE_8__ cache_hiwater_bytes; TYPE_6__ cache_target_bytes; TYPE_4__ cache_size_bytes; TYPE_2__ metadata_cache_size_bytes; } ;
typedef TYPE_14__ dbuf_stats_t ;
struct TYPE_22__ {int size; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_16__* VAR_4 ;
 int VAR_5 ;
 void* FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(kstat_t *VAR_6, int VAR_7)
{
 dbuf_stats_t *VAR_8 = VAR_6->ks_data;

 if (VAR_7 == VAR_3) {
  return (FUNC_0(VAR_2));
 } else {
  VAR_8->metadata_cache_size_bytes.value.ui64 = FUNC_4(
      &VAR_4[VAR_1].size);
  VAR_8->cache_size_bytes.value.ui64 =
      FUNC_4(&VAR_4[VAR_0].size);
  VAR_8->cache_target_bytes.value.ui64 = FUNC_3();
  VAR_8->cache_hiwater_bytes.value.ui64 = FUNC_1();
  VAR_8->cache_lowater_bytes.value.ui64 = FUNC_2();
  VAR_8->hash_elements.value.ui64 = VAR_5;
 }

 return (0);
}
