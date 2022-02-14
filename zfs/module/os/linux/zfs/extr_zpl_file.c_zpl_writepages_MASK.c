
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int z_id; } ;
typedef TYPE_2__ znode_t ;
struct TYPE_11__ {int * z_log; TYPE_1__* z_os; } ;
typedef TYPE_3__ zfsvfs_t ;
struct writeback_control {int sync_mode; } ;
struct address_space {int host; } ;
typedef enum writeback_sync_modes { ____Placeholder_writeback_sync_modes } writeback_sync_modes ;
struct TYPE_9__ {scalar_t__ os_sync; } ;


 TYPE_2__* FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct address_space*,struct writeback_control*,int ,struct address_space*) ;
 int FUNC_6 (int *,int ) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_7(struct address_space *VAR_4, struct writeback_control *VAR_5)
{
 znode_t *VAR_6 = FUNC_0(VAR_4->host);
 zfsvfs_t *VAR_7 = FUNC_1(VAR_4->host);
 enum writeback_sync_modes VAR_8;
 int VAR_9;

 FUNC_2(VAR_7);
 if (VAR_7->z_os->os_sync == VAR_2)
  VAR_5->sync_mode = VAR_0;
 FUNC_3(VAR_7);
 VAR_8 = VAR_5->sync_mode;
 VAR_5->sync_mode = VAR_1;
 VAR_9 = FUNC_5(VAR_4, VAR_5, VAR_3, VAR_4);
 if (VAR_8 != VAR_5->sync_mode) {
  FUNC_2(VAR_7);
  FUNC_4(VAR_6);
  if (VAR_7->z_log != ((void*)0))
   FUNC_6(VAR_7->z_log, VAR_6->z_id);
  FUNC_3(VAR_7);
  VAR_5->sync_mode = VAR_8;
  VAR_9 = FUNC_5(VAR_4, VAR_5, VAR_3, VAR_4);
 }
 return (VAR_9);
}
