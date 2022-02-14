
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ io_type; scalar_t__ io_error; int io_timestamp; int io_txg; TYPE_3__* io_vd; } ;
typedef TYPE_2__ zio_t ;
struct TYPE_14__ {scalar_t__ vdev_state; scalar_t__ vdev_remove_wanted; TYPE_1__* vdev_ops; } ;
typedef TYPE_3__ vdev_t ;
struct TYPE_15__ {scalar_t__ spa_last_open_failed; } ;
typedef TYPE_4__ spa_t ;
typedef int boolean_t ;
struct TYPE_12__ {scalar_t__ vdev_op_leaf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (char const*,int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int ,int ,int) ;

boolean_t
FUNC_4(const char *VAR_12, spa_t *VAR_13, vdev_t *VAR_14, zio_t *VAR_15)
{
 return (VAR_1);
}
