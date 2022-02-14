
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct zed_conf {int state_file; int state_fd; } ;
struct iovec {int iov_len; int * iov_base; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;
typedef int int64_t ;
typedef int etime ;
typedef int eid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,struct iovec*,int) ;
 int FUNC_4 (int ,char*,int ,...) ;

int
FUNC_5(struct zed_conf *VAR_6, uint64_t VAR_7, int64_t VAR_8[])
{
 ssize_t VAR_9;
 struct iovec VAR_10[3];
 ssize_t VAR_11;

 if (!VAR_6) {
  VAR_5 = VAR_0;
  FUNC_4(VAR_2,
      "Failed to write state file: %s", FUNC_2(VAR_5));
  return (-1);
 }
 if (FUNC_1(VAR_6->state_fd, 0, VAR_4) == (off_t)-1) {
  FUNC_4(VAR_3,
      "Failed to reposition state file offset: %s",
      FUNC_2(VAR_5));
  return (-1);
 }
 VAR_9 = 0;
 VAR_10[0].iov_base = &VAR_7;
 VAR_9 += VAR_10[0].iov_len = sizeof (VAR_7);
 VAR_10[1].iov_base = &VAR_8[0];
 VAR_9 += VAR_10[1].iov_len = sizeof (VAR_8[0]);
 VAR_10[2].iov_base = &VAR_8[1];
 VAR_9 += VAR_10[2].iov_len = sizeof (VAR_8[1]);

 VAR_11 = FUNC_3(VAR_6->state_fd, VAR_10, 3);
 if (VAR_11 < 0) {
  FUNC_4(VAR_3,
      "Failed to write state file \"%s\": %s",
      VAR_6->state_file, FUNC_2(VAR_5));
  return (-1);
 }
 if (VAR_11 != VAR_9) {
  VAR_5 = VAR_1;
  FUNC_4(VAR_3,
      "Failed to write state file \"%s\": Wrote %d of %d bytes",
      VAR_6->state_file, VAR_11, VAR_9);
  return (-1);
 }
 if (FUNC_0(VAR_6->state_fd) < 0) {
  FUNC_4(VAR_3,
      "Failed to sync state file \"%s\": %s",
      VAR_6->state_file, FUNC_2(VAR_5));
  return (-1);
 }
 return (0);
}
