
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int zs_atime; int zs_lock; void* zs_ipf_blkid; void* zs_pf_blkid; void* zs_blkid; } ;
typedef TYPE_2__ zstream_t ;
struct TYPE_14__ {int zf_stream; TYPE_1__* zf_dnode; int zf_lock; } ;
typedef TYPE_3__ zfetch_t ;
typedef void* uint64_t ;
typedef int uint32_t ;
struct TYPE_12__ {int dn_maxblkid; int dn_datablksz; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_6 () ;
 TYPE_2__* FUNC_7 (int,int ) ;
 TYPE_2__* FUNC_8 (int *) ;
 int FUNC_9 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_10 (int *,TYPE_2__*) ;
 int FUNC_11 (int *,int *,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_12(zfetch_t *VAR_7, uint64_t VAR_8)
{
 zstream_t *VAR_9;
 int VAR_10 = 0;

 FUNC_0(FUNC_3(&VAR_7->zf_lock));




 for (zstream_t *VAR_11 = FUNC_8(&VAR_7->zf_stream);
     VAR_11 != ((void*)0); VAR_11 = VAR_9) {
  VAR_9 = FUNC_10(&VAR_7->zf_stream, VAR_11);
  if (((FUNC_6() - VAR_11->zs_atime) / VAR_2) >
      VAR_5)
   FUNC_5(VAR_7, VAR_11);
  else
   VAR_10++;
 }
 uint32_t VAR_12 = FUNC_1(1, FUNC_2(VAR_4,
     VAR_7->zf_dnode->dn_maxblkid * VAR_7->zf_dnode->dn_datablksz /
     VAR_3));
 if (VAR_10 >= VAR_12) {
  FUNC_4(VAR_6);
  return;
 }

 zstream_t *VAR_13 = FUNC_7(sizeof (*VAR_13), VAR_0);
 VAR_13->zs_blkid = VAR_8;
 VAR_13->zs_pf_blkid = VAR_8;
 VAR_13->zs_ipf_blkid = VAR_8;
 VAR_13->zs_atime = FUNC_6();
 FUNC_11(&VAR_13->zs_lock, ((void*)0), VAR_1, ((void*)0));

 FUNC_9(&VAR_7->zf_stream, VAR_13);
}
