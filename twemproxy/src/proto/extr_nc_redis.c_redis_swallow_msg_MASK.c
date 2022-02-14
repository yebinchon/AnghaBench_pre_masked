
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {int data; } ;
struct server_pool {TYPE_1__ name; int redis_db; } ;
struct TYPE_4__ {int data; } ;
struct server {TYPE_2__ name; struct server_pool* owner; } ;
struct msg {scalar_t__ type; int mhdr; } ;
struct mbuf {int * start; } ;
struct conn {scalar_t__ owner; } ;
typedef int message ;


 size_t FUNC_0 (scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 struct mbuf* FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (char*,int ,int ,int ,scalar_t__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct mbuf*) ;
 int FUNC_4 (scalar_t__*,int *,size_t) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (struct msg*) ;

void
FUNC_6(struct conn *VAR_3, struct msg *VAR_4, struct msg *VAR_5)
{
    if (VAR_4 != ((void*)0) && VAR_4->type == VAR_0 &&
        VAR_5 != ((void*)0) && FUNC_5(VAR_5)) {
        struct server* VAR_6;
        struct server_pool* VAR_7;
        struct mbuf* VAR_8;
        uint8_t VAR_9[128];
        size_t VAR_10;





        VAR_6 = (struct server*)VAR_3->owner;
        VAR_7 = VAR_6->owner;
        VAR_8 = FUNC_1(&VAR_5->mhdr, VAR_1, VAR_2);
        VAR_10 = FUNC_0(FUNC_3(VAR_8) - 3, sizeof(VAR_9) - 1);

        FUNC_4(VAR_9, &VAR_8->start[1], VAR_10);
        VAR_9[VAR_10] = 0;

        FUNC_2("SELECT %d failed on %s | %s: %s",
                 VAR_7->redis_db, VAR_7->name.data,
                 VAR_6->name.data, VAR_9);
    }
}
