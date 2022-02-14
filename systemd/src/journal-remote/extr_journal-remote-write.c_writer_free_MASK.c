
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ mmap; scalar_t__ hashmap_key; TYPE_1__* server; TYPE_7__* journal; } ;
typedef TYPE_2__ Writer ;
struct TYPE_10__ {int path; } ;
struct TYPE_8__ {int writers; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (char*,int ) ;
 TYPE_2__* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static Writer* FUNC_6(Writer *VAR_0) {
        if (!VAR_0)
                return ((void*)0);

        if (VAR_0->journal) {
                FUNC_3("Closing journal file %s.", VAR_0->journal->path);
                FUNC_2(VAR_0->journal);
        }

        if (VAR_0->server && VAR_0->hashmap_key)
                FUNC_1(VAR_0->server->writers, VAR_0->hashmap_key);

        FUNC_0(VAR_0->hashmap_key);

        if (VAR_0->mmap)
                FUNC_5(VAR_0->mmap);

        return FUNC_4(VAR_0);
}
