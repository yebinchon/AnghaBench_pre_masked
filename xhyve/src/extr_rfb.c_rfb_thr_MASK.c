
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfb_softc {int enc_raw_ok; int enc_zlib_ok; int enc_resize_ok; scalar_t__ conn_wait; int mtx; int cond; int sfd; } ;
typedef int sigset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int ,int *,int *) ;
 int FUNC_8 (struct rfb_softc*,int) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void *
FUNC_11(void *VAR_2)
{
 struct rfb_softc *VAR_3;
 sigset_t VAR_4;

 int VAR_5;

    FUNC_6("rfb");

 VAR_3 = VAR_2;

 FUNC_10(&VAR_4);
 FUNC_9(&VAR_4, VAR_0);
 if (FUNC_7(VAR_1, &VAR_4, ((void*)0)) != 0) {
  FUNC_2("pthread_sigmask");
  return (((void*)0));
 }

 for (;;) {
  VAR_3->enc_raw_ok = 0;
  VAR_3->enc_zlib_ok = 0;
  VAR_3->enc_resize_ok = 0;

  VAR_5 = FUNC_0(VAR_3->sfd, ((void*)0), ((void*)0));
  if (VAR_3->conn_wait) {
   FUNC_4(&VAR_3->mtx);
   FUNC_3(&VAR_3->cond);
   FUNC_5(&VAR_3->mtx);
   VAR_3->conn_wait = 0;
  }
  FUNC_8(VAR_3, VAR_5);
  FUNC_1(VAR_5);
 }


 return (((void*)0));
}
