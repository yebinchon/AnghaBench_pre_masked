
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef scalar_t__ sa_family_t ;
typedef int request ;
struct TYPE_14__ {int ip_port; } ;
struct TYPE_13__ {int ip_port; } ;
struct TYPE_17__ {TYPE_2__ assoc6; TYPE_1__ assoc4; int public_key; } ;
struct TYPE_16__ {int assoc; } ;
struct TYPE_15__ {int count; int count_good; size_t const* wanted_id; int ip_port; int public_key; scalar_t__ flags; TYPE_5__** result; } ;
typedef TYPE_3__ Node_format ;
typedef TYPE_4__ DHT ;
typedef TYPE_5__ Client_data ;
typedef TYPE_3__ Assoc_close_entries ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (int ,TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_1 (char*,...) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (TYPE_4__ const*,size_t const*,TYPE_3__*,scalar_t__,size_t,size_t) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,int ,int) ;

int FUNC_6(const DHT *VAR_6, const uint8_t *VAR_7, Node_format *VAR_8, sa_family_t VAR_9,
                    uint8_t VAR_10, uint8_t VAR_11)
{
    FUNC_5(VAR_8, 0, VAR_3 * sizeof(Node_format));




        return FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
}
