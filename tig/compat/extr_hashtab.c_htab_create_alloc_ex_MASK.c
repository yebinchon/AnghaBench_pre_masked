
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct htab {int dummy; } ;
typedef TYPE_1__* htab_t ;
typedef int htab_hash ;
typedef int (* htab_free_with_arg ) (void*,TYPE_1__*) ;
typedef int htab_eq ;
typedef int htab_del ;
typedef scalar_t__ (* htab_alloc_with_arg ) (void*,size_t,int) ;
struct TYPE_8__ {size_t prime; } ;
struct TYPE_7__ {size_t size; unsigned int size_prime_index; int (* free_with_arg_f ) (void*,TYPE_1__*) ;scalar_t__ (* alloc_with_arg_f ) (void*,size_t,int) ;void* alloc_arg; int del_f; int eq_f; int hash_f; int * entries; } ;
typedef int PTR ;


 unsigned int FUNC_0 (size_t) ;
 TYPE_4__* VAR_0 ;
 scalar_t__ FUNC_1 (void*,size_t,int) ;
 scalar_t__ FUNC_2 (void*,size_t,int) ;
 int FUNC_3 (void*,TYPE_1__*) ;

htab_t
FUNC_4 (size_t VAR_1, htab_hash VAR_2, htab_eq VAR_3,
        htab_del VAR_4, void *VAR_5,
        htab_alloc_with_arg VAR_6,
        htab_free_with_arg VAR_7)
{
  htab_t VAR_8;
  unsigned int VAR_9;

  VAR_9 = FUNC_0 (VAR_1);
  VAR_1 = VAR_0[VAR_9].prime;

  VAR_8 = (htab_t) (*VAR_6) (VAR_5, 1, sizeof (struct htab));
  if (VAR_8 == ((void*)0))
    return ((void*)0);
  VAR_8->entries = (PTR *) (*VAR_6) (VAR_5, VAR_1, sizeof (PTR));
  if (VAR_8->entries == ((void*)0))
    {
      if (VAR_7 != ((void*)0))
 (*VAR_7) (VAR_5, VAR_8);
      return ((void*)0);
    }
  VAR_8->size = VAR_1;
  VAR_8->size_prime_index = VAR_9;
  VAR_8->hash_f = VAR_2;
  VAR_8->eq_f = VAR_3;
  VAR_8->del_f = VAR_4;
  VAR_8->alloc_arg = VAR_5;
  VAR_8->alloc_with_arg_f = VAR_6;
  VAR_8->free_with_arg_f = VAR_7;
  return VAR_8;
}
