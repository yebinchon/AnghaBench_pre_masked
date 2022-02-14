__attribute__((used)) static const char *FUNC_0(unsigned VAR_0)
{
    typedef struct
    {
        unsigned i_code;
        const char psz_reason[36];
    } http_status_info;

    static const http_status_info VAR_1[] =
    {


        { 200, "OK" },
        { 301, "Moved permanently" },






        { 401, "Unauthorized" },

        { 403, "Forbidden" },
        { 404, "Not found" },
        { 405, "Method not allowed" },
        { 454, "Session not found" },
        { 455, "Method not valid in this State" },
        { 456, "Header field not valid for resource" },
        { 457, "Invalid range" },

        { 459, "Aggregate operation not allowed" },
        { 460, "Non-aggregate operation not allowed" },
        { 461, "Unsupported transport" },

        { 500, "Internal server error" },
        { 501, "Not implemented" },

        { 503, "Service unavailable" },

        { 505, "Protocol version not supported" },
        { 551, "Option not supported" },
        { 999, "" }
    };

    static const char VAR_2[5][16] = {
        "Continue", "OK", "Found", "Client error", "Server error"
    };

    FUNC_0((VAR_0 >= 100) && (VAR_0 <= 599));

    const http_status_info *VAR_3 = VAR_1;
    while (VAR_0 < VAR_3->i_code)
        VAR_3++;

    if (VAR_3->i_code == VAR_0)
        return VAR_3->psz_reason;

    return VAR_2[(VAR_0 / 100) - 1];
}
