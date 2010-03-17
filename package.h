struct aurpkg {
    int ID;
    int CategoryID;
    int LocationID;
    int NumVotes;
    int OutOfDate;
    const char *Name;
    const char *Version;
    const char *Description;
    const char *URL;
    const char *URLPath;
    const char *License;
};

void print_package(struct aurpkg*);
