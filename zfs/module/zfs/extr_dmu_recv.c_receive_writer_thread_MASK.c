
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct receive_writer_arg {scalar_t__ err; int mutex; int cv; int done; int q; } ;
struct receive_record_arg {int payload_size; struct receive_record_arg* payload; int * arc_buf; int eos_marker; } ;
typedef int fstrans_cookie_t ;


 int VAR_0 ;
 struct receive_record_arg* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct receive_record_arg*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct receive_writer_arg*,struct receive_record_arg*) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;

__attribute__((used)) static void
FUNC_10(void *VAR_1)
{
 struct receive_writer_arg *VAR_2 = VAR_1;
 struct receive_record_arg *VAR_3;
 fstrans_cookie_t VAR_4 = FUNC_7();

 for (VAR_3 = FUNC_0(&VAR_2->q); !VAR_3->eos_marker;
     VAR_3 = FUNC_0(&VAR_2->q)) {





  if (VAR_2->err == 0) {
   VAR_2->err = FUNC_6(VAR_2, VAR_3);
  } else if (VAR_3->arc_buf != ((void*)0)) {
   FUNC_2(VAR_3->arc_buf);
   VAR_3->arc_buf = ((void*)0);
   VAR_3->payload = ((void*)0);
  } else if (VAR_3->payload != ((void*)0)) {
   FUNC_3(VAR_3->payload, VAR_3->payload_size);
   VAR_3->payload = ((void*)0);
  }
  FUNC_3(VAR_3, sizeof (*VAR_3));
 }
 FUNC_3(VAR_3, sizeof (*VAR_3));
 FUNC_4(&VAR_2->mutex);
 VAR_2->done = VAR_0;
 FUNC_1(&VAR_2->cv);
 FUNC_5(&VAR_2->mutex);
 FUNC_8(VAR_4);
 FUNC_9();
}
