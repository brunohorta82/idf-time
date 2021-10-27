            time_t now;
            char strftime_buf[64];
            struct tm timeinfo;
            time(&now);
            setenv("TZ", "GMT+0BST-1,M3.5.0/01:00:00,M10.5.0/02:00:00", 0);
            tzset();
            localtime_r(&now, &timeinfo);
            strftime(strftime_buf, sizeof(strftime_buf), "%c", &timeinfo);
