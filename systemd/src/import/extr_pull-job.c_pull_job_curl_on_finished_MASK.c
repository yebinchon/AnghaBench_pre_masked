
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct timespec {int dummy; } ;
struct TYPE_4__ {scalar_t__ state; int etag_exists; scalar_t__ style; scalar_t__ content_length; scalar_t__ written_compressed; scalar_t__ disk_fd; scalar_t__ mtime; scalar_t__ url; scalar_t__ etag; int written_uncompressed; scalar_t__ allow_sparse; int checksum; scalar_t__ checksum_context; int * curl; } ;
typedef TYPE_1__ PullJob ;
typedef int CurlGlue ;
typedef scalar_t__ CURLcode ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 (int *,int ,...) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_10 ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__,char*,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__,struct timespec*) ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (char*,scalar_t__,int ) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 () ;
 int FUNC_15 (TYPE_1__*,int) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (struct timespec*,scalar_t__) ;

void FUNC_19(CurlGlue *VAR_11, CURL *VAR_12, CURLcode VAR_13) {
        PullJob *VAR_14 = ((void*)0);
        CURLcode VAR_15;
        long VAR_16;
        int VAR_17;

        if (FUNC_1(VAR_12, VAR_1, (char **)&VAR_14) != VAR_0)
                return;

        if (!VAR_14 || FUNC_0(VAR_14->state, VAR_5, VAR_6))
                return;

        if (VAR_13 != VAR_0) {
                FUNC_11("Transfer failed: %s", FUNC_2(VAR_13));
                VAR_17 = -VAR_3;
                goto finish;
        }

        VAR_15 = FUNC_1(VAR_12, VAR_2, &VAR_16);
        if (VAR_15 != VAR_0) {
                FUNC_11("Failed to retrieve response code: %s", FUNC_2(VAR_15));
                VAR_17 = -VAR_3;
                goto finish;
        } else if (VAR_16 == 304) {
                FUNC_13("Image already downloaded. Skipping download.");
                VAR_14->etag_exists = 1;
                VAR_17 = 0;
                goto finish;
        } else if (VAR_16 >= 300) {
                if (VAR_16 == 404 && VAR_14->style == VAR_9) {


                        VAR_17 = FUNC_16(VAR_14);
                        if (VAR_17 < 0)
                                goto finish;

                        VAR_15 = FUNC_1(VAR_14->curl, VAR_2, &VAR_16);
                        if (VAR_15 != VAR_0) {
                                FUNC_11("Failed to retrieve response code: %s", FUNC_2(VAR_15));
                                VAR_17 = -VAR_3;
                                goto finish;
                        }

                        if (VAR_16 == 0) {
                                VAR_14->style = VAR_8;
                                return;
                        }
                }

                FUNC_11("HTTP request to %s failed with code %li.", VAR_14->url, VAR_16);
                VAR_17 = -VAR_3;
                goto finish;
        } else if (VAR_16 < 200) {
                FUNC_11("HTTP request to %s finished with unexpected code %li.", VAR_14->url, VAR_16);
                VAR_17 = -VAR_3;
                goto finish;
        }

        if (VAR_14->state != VAR_7) {
                FUNC_11("Premature connection termination.");
                VAR_17 = -VAR_3;
                goto finish;
        }

        if (VAR_14->content_length != (uint64_t) -1 &&
            VAR_14->content_length != VAR_14->written_compressed) {
                FUNC_11("Download truncated.");
                VAR_17 = -VAR_3;
                goto finish;
        }

        if (VAR_14->checksum_context) {
                uint8_t *VAR_18;

                VAR_18 = FUNC_8(VAR_14->checksum_context, VAR_4);
                if (!VAR_18) {
                        FUNC_11("Failed to get checksum.");
                        VAR_17 = -VAR_3;
                        goto finish;
                }

                VAR_14->checksum = FUNC_9(VAR_18, FUNC_7(VAR_4));
                if (!VAR_14->checksum) {
                        VAR_17 = FUNC_14();
                        goto finish;
                }

                FUNC_10("SHA256 of %s is %s.", VAR_14->url, VAR_14->checksum);
        }

        if (VAR_14->disk_fd >= 0 && VAR_14->allow_sparse) {



                if (FUNC_5(VAR_14->disk_fd, VAR_14->written_uncompressed) < 0) {
                        VAR_17 = FUNC_12(VAR_10, "Failed to truncate file: %m");
                        goto finish;
                }

                if (VAR_14->etag)
                        (void) FUNC_4(VAR_14->disk_fd, "user.source_etag", VAR_14->etag, FUNC_17(VAR_14->etag), 0);
                if (VAR_14->url)
                        (void) FUNC_4(VAR_14->disk_fd, "user.source_url", VAR_14->url, FUNC_17(VAR_14->url), 0);

                if (VAR_14->mtime != 0) {
                        struct timespec VAR_19[2];

                        FUNC_18(&VAR_19[0], VAR_14->mtime);
                        VAR_19[1] = VAR_19[0];
                        (void) FUNC_6(VAR_14->disk_fd, VAR_19);

                        (void) FUNC_3(VAR_14->disk_fd, VAR_14->mtime);
                }
        }

        VAR_17 = 0;

finish:
        FUNC_15(VAR_14, VAR_17);
}
