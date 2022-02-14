
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int numelements; int misses; int hits; } ;
struct TYPE_13__ {void* (* create_entry ) (TYPE_3__*,TYPE_2__*) ;void* (* update_entry ) (TYPE_3__*,TYPE_2__*) ;TYPE_1__ stats; int (* get_key ) (TYPE_2__*) ;int * htab; int name; } ;
struct TYPE_12__ {void* result; } ;
typedef int HASHACTION ;
typedef TYPE_2__ CacheQuery ;
typedef TYPE_3__ Cache ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 void* FUNC_1 (int *,int ,int ,int*) ;
 int FUNC_2 (TYPE_2__*) ;
 void* FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 void* FUNC_4 (TYPE_3__*,TYPE_2__*) ;

void *
FUNC_5(Cache *VAR_3, CacheQuery *VAR_4)
{
 bool VAR_5;
 HASHACTION VAR_6 = VAR_3->create_entry == ((void*)0) ? VAR_2 : VAR_1;

 if (VAR_3->htab == ((void*)0))
  FUNC_0(VAR_0, "hash %s is not initialized", VAR_3->name);

 VAR_4->result = FUNC_1(VAR_3->htab, VAR_3->get_key(VAR_4), VAR_6, &VAR_5);

 if (VAR_5)
 {
  VAR_3->stats.hits++;

  if (VAR_3->update_entry != ((void*)0))
   VAR_4->result = VAR_3->update_entry(VAR_3, VAR_4);
 }
 else
 {
  VAR_3->stats.misses++;

  if (VAR_3->create_entry != ((void*)0))
  {
   VAR_3->stats.numelements++;
   VAR_4->result = VAR_3->create_entry(VAR_3, VAR_4);
  }
 }

 return VAR_4->result;
}
