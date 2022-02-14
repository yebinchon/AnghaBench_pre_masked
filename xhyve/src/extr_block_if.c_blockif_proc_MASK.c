
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void uint8_t ;
struct blockif_req {int br_iovcnt; int (* br_callback ) (struct blockif_req*,int) ;scalar_t__ br_resid; scalar_t__ br_offset; TYPE_1__* br_iov; } ;
struct blockif_elem {int be_op; int be_status; struct blockif_req* be_req; } ;
struct blockif_ctxt {int bc_candelete; int bc_fd; int bc_ischr; int bc_rdonly; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_3__ {int iov_len; int iov_base; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (void*,void*,scalar_t__) ;
 int FUNC_4 (int ,void*,size_t,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,TYPE_1__*,int,scalar_t__) ;
 int FUNC_6 (int ,void*,size_t,scalar_t__) ;
 scalar_t__ FUNC_7 (int ,TYPE_1__*,int,scalar_t__) ;
 int FUNC_8 (struct blockif_req*,int) ;

__attribute__((used)) static void
FUNC_9(struct blockif_ctxt *VAR_6, struct blockif_elem *VAR_7, uint8_t *VAR_8)
{
 struct blockif_req *VAR_9;

 ssize_t VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15, VAR_16;

 VAR_9 = VAR_7->be_req;
 if (VAR_9->br_iovcnt <= 1)
  VAR_8 = ((void*)0);
 VAR_16 = 0;
 switch (VAR_7->be_op) {
 case 129:
  if (VAR_8 == ((void*)0)) {
   if ((VAR_11 = FUNC_5(VAR_6->bc_fd, VAR_9->br_iov, VAR_9->br_iovcnt,
       VAR_9->br_offset)) < 0)
    VAR_16 = VAR_5;
   else
    VAR_9->br_resid -= VAR_11;
   break;
  }
  VAR_15 = 0;
  VAR_12 = VAR_14 = 0;
  while (VAR_9->br_resid > 0) {
   VAR_11 = FUNC_0(VAR_9->br_resid, VAR_4);
   if (FUNC_4(VAR_6->bc_fd, VAR_8, ((size_t) VAR_11), VAR_9->br_offset + VAR_12) < 0)
   {
    VAR_16 = VAR_5;
    break;
   }
   VAR_13 = 0;
   do {
    VAR_10 = FUNC_0((VAR_11 - VAR_13),
     (((ssize_t) VAR_9->br_iov[VAR_15].iov_len) - VAR_14));
    FUNC_3(((void *) (((uintptr_t) VAR_9->br_iov[VAR_15].iov_base) +
     ((size_t) VAR_14))), VAR_8 + VAR_13, VAR_10);
    if (VAR_10 < (((ssize_t) VAR_9->br_iov[VAR_15].iov_len) - VAR_14))
     VAR_14 += VAR_10;
    else {
     VAR_15++;
     VAR_14 = 0;
    }
    VAR_13 += VAR_10;
   } while (VAR_13 < VAR_11);
   VAR_12 += VAR_11;
   VAR_9->br_resid -= VAR_11;
  }
  break;
 case 128:
  if (VAR_6->bc_rdonly) {
   VAR_16 = VAR_3;
   break;
  }
  if (VAR_8 == ((void*)0)) {
   if ((VAR_11 = FUNC_7(VAR_6->bc_fd, VAR_9->br_iov, VAR_9->br_iovcnt,
        VAR_9->br_offset)) < 0)
    VAR_16 = VAR_5;
   else
    VAR_9->br_resid -= VAR_11;
   break;
  }
  VAR_15 = 0;
  VAR_12 = VAR_14 = 0;
  while (VAR_9->br_resid > 0) {
   VAR_11 = FUNC_0(VAR_9->br_resid, VAR_4);
   VAR_13 = 0;
   do {
    VAR_10 = FUNC_0((VAR_11 - VAR_13),
     (((ssize_t) VAR_9->br_iov[VAR_15].iov_len) - VAR_14));
    FUNC_3((VAR_8 + VAR_13),
     ((void *) (((uintptr_t) VAR_9->br_iov[VAR_15].iov_base) +
      ((size_t) VAR_14))), VAR_10);
    if (VAR_10 < (((ssize_t) VAR_9->br_iov[VAR_15].iov_len) - VAR_14))
     VAR_14 += VAR_10;
    else {
     VAR_15++;
     VAR_14 = 0;
    }
    VAR_13 += VAR_10;
   } while (VAR_13 < VAR_11);
   if (FUNC_6(VAR_6->bc_fd, VAR_8, ((size_t) VAR_11), VAR_9->br_offset +
       VAR_12) < 0) {
    VAR_16 = VAR_5;
    break;
   }
   VAR_12 += VAR_11;
   VAR_9->br_resid -= VAR_11;
  }
  break;
 case 130:
  if (VAR_6->bc_ischr) {
   if (FUNC_2(VAR_6->bc_fd, VAR_1))
    VAR_16 = VAR_5;
  } else if (FUNC_1(VAR_6->bc_fd))
   VAR_16 = VAR_5;
  break;
 case 131:
  if (!VAR_6->bc_candelete) {
   VAR_16 = VAR_2;
  } else {
   VAR_16 = VAR_2;
  }
  break;
 }

 VAR_7->be_status = VAR_0;

 (*VAR_9->br_callback)(VAR_9, VAR_16);
}
