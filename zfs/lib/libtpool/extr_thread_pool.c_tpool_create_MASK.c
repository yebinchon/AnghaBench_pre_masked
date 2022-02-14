
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint_t ;
struct TYPE_6__ {int tp_minimum; int tp_maximum; int tp_linger; struct TYPE_6__* tp_back; struct TYPE_6__* tp_forw; int tp_attr; int tp_waitcv; int tp_workcv; int tp_busycv; int tp_mutex; } ;
typedef TYPE_1__ tpool_t ;
typedef int pthread_attr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,void**,size_t*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;

tpool_t *
FUNC_9(uint_t VAR_7, uint_t VAR_8, uint_t VAR_9,
    pthread_attr_t *VAR_10)
{
 tpool_t *VAR_11;
 void *VAR_12;
 size_t VAR_13;
 size_t VAR_14;
 int VAR_15;

 if (VAR_7 > VAR_8 || VAR_8 < 1) {
  VAR_4 = VAR_0;
  return (((void*)0));
 }
 if (VAR_10 != ((void*)0)) {
  if (FUNC_3(VAR_10, &VAR_12, &VAR_13) != 0) {
   VAR_4 = VAR_0;
   return (((void*)0));
  }




  VAR_14 = VAR_3;
  if (VAR_12 != ((void*)0)) {
   if (VAR_13 < VAR_14 || VAR_8 != 1) {
    VAR_4 = VAR_0;
    return (((void*)0));
   }
  } else if (VAR_13 != 0 && VAR_13 < VAR_14) {
   VAR_4 = VAR_0;
   return (((void*)0));
  }
 }

 VAR_11 = FUNC_0(1, sizeof (*VAR_11));
 if (VAR_11 == ((void*)0)) {
  VAR_4 = VAR_1;
  return (((void*)0));
 }
 (void) FUNC_6(&VAR_11->tp_mutex, ((void*)0));
 (void) FUNC_5(&VAR_11->tp_busycv, ((void*)0));
 (void) FUNC_5(&VAR_11->tp_workcv, ((void*)0));
 (void) FUNC_5(&VAR_11->tp_waitcv, ((void*)0));
 VAR_11->tp_minimum = VAR_7;
 VAR_11->tp_maximum = VAR_8;
 VAR_11->tp_linger = VAR_9;
 VAR_15 = FUNC_2(&VAR_11->tp_attr, VAR_10);
 if (VAR_15) {
  FUNC_1(VAR_11);
  VAR_4 = VAR_15;
  return (((void*)0));
 }


 (void) FUNC_4(&VAR_11->tp_attr,
     VAR_2);


 FUNC_7(&VAR_5);
 if (VAR_6 == ((void*)0)) {
  VAR_11->tp_forw = VAR_11;
  VAR_11->tp_back = VAR_11;
  VAR_6 = VAR_11;
 } else {
  VAR_6->tp_back->tp_forw = VAR_11;
  VAR_11->tp_forw = VAR_6;
  VAR_11->tp_back = VAR_6->tp_back;
  VAR_6->tp_back = VAR_11;
 }
 FUNC_8(&VAR_5);

 return (VAR_11);
}
