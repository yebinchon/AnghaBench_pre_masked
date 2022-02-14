
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int ulong_t ;
typedef int u_longlong_t ;
typedef int longlong_t ;
struct TYPE_16__ {TYPE_1__* dn_objset; int dn_holds; } ;
typedef TYPE_3__ dnode_t ;
struct TYPE_17__ {scalar_t__ doi_max_offset; scalar_t__ doi_fill_count; scalar_t__ doi_indirection; scalar_t__ doi_bonus_size; scalar_t__ doi_metadata_block_size; scalar_t__ doi_data_block_size; int doi_bonus_type; int doi_type; int member_0; } ;
typedef TYPE_4__ dmu_object_info_t ;
struct TYPE_15__ {scalar_t__ db_object; scalar_t__ db_size; scalar_t__ db_offset; } ;
struct TYPE_18__ {TYPE_2__ db; int db_objset; int db_cache_link; int db_holds; int db_state; scalar_t__ db_blkid; scalar_t__ db_level; scalar_t__ db_buf; } ;
typedef TYPE_5__ dmu_buf_impl_t ;
struct TYPE_19__ {scalar_t__ abi_holds; int abi_l2arc_compress; scalar_t__ abi_l2arc_asize; scalar_t__ abi_l2arc_dattr; scalar_t__ abi_l2arc_hits; scalar_t__ abi_mfu_ghost_hits; scalar_t__ abi_mfu_hits; scalar_t__ abi_mru_ghost_hits; scalar_t__ abi_mru_hits; scalar_t__ abi_access; scalar_t__ abi_size; scalar_t__ abi_bufcnt; int abi_flags; int abi_state_contents; int abi_state_type; int member_0; } ;
typedef TYPE_6__ arc_buf_info_t ;
struct TYPE_14__ {int os_spa; } ;


 TYPE_3__* FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_2 (scalar_t__,TYPE_6__*,int ) ;
 int FUNC_3 (TYPE_5__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 size_t FUNC_6 (char*,size_t,char*,char*,int,int,int,int,int,int,int,int ,int ,int ,int ,int ,int ,int ,int,int,int ,int ,int ,int ,int ,int,int,int ,int ,int ,int ,int ,int ,int,int ,int ,int,int) ;
 char* FUNC_7 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_8 (int *) ;

int
FUNC_9(char *VAR_1, size_t VAR_2, dmu_buf_impl_t *VAR_3)
{
 arc_buf_info_t VAR_4 = { 0 };
 dmu_object_info_t VAR_5 = { 0 };
 dnode_t *VAR_6 = FUNC_0(VAR_3);
 size_t VAR_7;

 if (VAR_3->db_buf)
  FUNC_2(VAR_3->db_buf, &VAR_4, VAR_0);

 FUNC_1(VAR_6, &VAR_5);

 VAR_7 = FUNC_6(VAR_1, VAR_2,
     "%-16s %-8llu %-8lld %-8lld %-8lld %-10llu %-8llu %-5d %-5d "
     "%-7lu %-3d | %-5d %-5d 0x%-7x %-6lu %-8llu %-12llu "
     "%-6lu %-6lu %-6lu %-6lu %-6lu %-8llu %-8llu %-8d %-6lu | "
     "%-6d %-6d %-8lu %-8lu %-6llu %-6lu %-6lu %-8llu %-8llu\n",

     FUNC_7(VAR_6->dn_objset->os_spa),
     (u_longlong_t)FUNC_4(VAR_3->db_objset),
     (longlong_t)VAR_3->db.db_object,
     (longlong_t)VAR_3->db_level,
     (longlong_t)VAR_3->db_blkid,
     (u_longlong_t)VAR_3->db.db_offset,
     (u_longlong_t)VAR_3->db.db_size,
     !!FUNC_3(VAR_3),
     VAR_3->db_state,
     (ulong_t)FUNC_8(&VAR_3->db_holds),
     FUNC_5(&VAR_3->db_cache_link),

     VAR_4.abi_state_type,
     VAR_4.abi_state_contents,
     VAR_4.abi_flags,
     (ulong_t)VAR_4.abi_bufcnt,
     (u_longlong_t)VAR_4.abi_size,
     (u_longlong_t)VAR_4.abi_access,
     (ulong_t)VAR_4.abi_mru_hits,
     (ulong_t)VAR_4.abi_mru_ghost_hits,
     (ulong_t)VAR_4.abi_mfu_hits,
     (ulong_t)VAR_4.abi_mfu_ghost_hits,
     (ulong_t)VAR_4.abi_l2arc_hits,
     (u_longlong_t)VAR_4.abi_l2arc_dattr,
     (u_longlong_t)VAR_4.abi_l2arc_asize,
     VAR_4.abi_l2arc_compress,
     (ulong_t)VAR_4.abi_holds,

     VAR_5.doi_type,
     VAR_5.doi_bonus_type,
     (ulong_t)VAR_5.doi_data_block_size,
     (ulong_t)VAR_5.doi_metadata_block_size,
     (u_longlong_t)VAR_5.doi_bonus_size,
     (ulong_t)VAR_5.doi_indirection,
     (ulong_t)FUNC_8(&VAR_6->dn_holds),
     (u_longlong_t)VAR_5.doi_fill_count,
     (u_longlong_t)VAR_5.doi_max_offset);

 if (VAR_7 >= VAR_2)
  return (VAR_2);

 return (VAR_7 + 1);
}
