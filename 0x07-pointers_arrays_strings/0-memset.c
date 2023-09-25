{"payload":{"allShortcutsEnabled":false,"fileTree":{"0x07-pointers_arrays_strings":{"items":[{"name":"0-main.c","path":"0x07-pointers_arrays_strings/0-main.c","contentType":"file"},{"name":"0-memset.c","path":"0x07-pointers_arrays_strings/0-memset.c","contentType":"file"},{"name":"1-main.c","path":"0x07-pointers_arrays_strings/1-main.c","contentType":"file"},{"name":"1-memcpy.c","path":"0x07-pointers_arrays_strings/1-memcpy.c","contentType":"file"},{"name":"100-set_string.c","path":"0x07-pointers_arrays_strings/100-set_string.c","contentType":"file"},{"name":"101-crackme_password","path":"0x07-pointers_arrays_strings/101-crackme_password","contentType":"file"},{"name":"2-main.c","path":"0x07-pointers_arrays_strings/2-main.c","contentType":"file"},{"name":"2-strchr.c","path":"0x07-pointers_arrays_strings/2-strchr.c","contentType":"file"},{"name":"3-strspn.c","path":"0x07-pointers_arrays_strings/3-strspn.c","contentType":"file"},{"name":"4-strpbrk.c","path":"0x07-pointers_arrays_strings/4-strpbrk.c","contentType":"file"},{"name":"5-strstr.c","path":"0x07-pointers_arrays_strings/5-strstr.c","contentType":"file"},{"name":"7-print_chessboard.c","path":"0x07-pointers_arrays_strings/7-print_chessboard.c","contentType":"file"},{"name":"8-print_diagsums.c","path":"0x07-pointers_arrays_strings/8-print_diagsums.c","contentType":"file"},{"name":"README.md","path":"0x07-pointers_arrays_strings/README.md","contentType":"file"},{"name":"_putchar.c","path":"0x07-pointers_arrays_strings/_putchar.c","contentType":"file"},{"name":"main.h","path":"0x07-pointers_arrays_strings/main.h","contentType":"file"}],"totalCount":16},"":{"items":[{"name":"0x00-hello_world","path":"0x00-hello_world","contentType":"directory"},{"name":"0x01-variables_if_else_while","path":"0x01-variables_if_else_while","contentType":"directory"},{"name":"0x02-functions_nested_loops","path":"0x02-functions_nested_loops","contentType":"directory"},{"name":"0x03-debugging","path":"0x03-debugging","contentType":"directory"},{"name":"0x04-more_functions_nested_loops","path":"0x04-more_functions_nested_loops","contentType":"directory"},{"name":"0x05-pointers_arrays_strings","path":"0x05-pointers_arrays_strings","contentType":"directory"},{"name":"0x06-pointers_arrays_strings","path":"0x06-pointers_arrays_strings","contentType":"directory"},{"name":"0x07-pointers_arrays_strings","path":"0x07-pointers_arrays_strings","contentType":"directory"},{"name":"0x08-recursion","path":"0x08-recursion","contentType":"directory"},{"name":"0x09-static_libraries","path":"0x09-static_libraries","contentType":"directory"},{"name":"0x0A-argc_argv","path":"0x0A-argc_argv","contentType":"directory"},{"name":"0x0B-malloc_free","path":"0x0B-malloc_free","contentType":"directory"},{"name":"0x0C-more_malloc_free","path":"0x0C-more_malloc_free","contentType":"directory"},{"name":"0x0D-preprocessor","path":"0x0D-preprocessor","contentType":"directory"},{"name":"0x0E-structures_typedef","path":"0x0E-structures_typedef","contentType":"directory"},{"name":"0x0F-function_pointers","path":"0x0F-function_pointers","contentType":"directory"},{"name":"0x10-variadic_functions","path":"0x10-variadic_functions","contentType":"directory"},{"name":"0x12-singly_linked_lists","path":"0x12-singly_linked_lists","contentType":"directory"},{"name":"0x13-more_singly_linked_lists","path":"0x13-more_singly_linked_lists","contentType":"directory"},{"name":"0x14-bit_manipulation","path":"0x14-bit_manipulation","contentType":"directory"},{"name":"0x15-file_io","path":"0x15-file_io","contentType":"directory"},{"name":"0x17-doubly_linked_lists","path":"0x17-doubly_linked_lists","contentType":"directory"},{"name":"0x18-dynamic_libraries","path":"0x18-dynamic_libraries","contentType":"directory"}],"totalCount":23}},"fileTreeProcessingTime":9.026050000000001,"foldersToFetch":[],"reducedMotionEnabled":null,"repo":{"id":654012304,"defaultBranch":"master","name":"alx-low_level_programming","ownerLogin":"Nzioka6350","currentUserCanPush":false,"isFork":false,"isEmpty":false,"createdAt":"2023-06-15T07:58:06.000Z","ownerAvatar":"https://avatars.githubusercontent.com/u/115072481?v=4","public":true,"private":false,"isOrgOwned":false},"symbolsExpanded":false,"treeExpanded":true,"refInfo":{"name":"master","listCacheKey":"v0:1686820018.250507","canEdit":false,"refType":"branch","currentOid":"2d35c7d39f44d6a165df1d25ece60f6513e4bfd6"},"path":"0x07-pointers_arrays_strings/0-memset.c","currentUser":null,"blob":{"rawLines":["#include \"main.h\"","/**"," * _memset - fill a block of memory with a specific value"," * @s: starting address of memory to be filled"," * @b: the desired value"," * @n: number of bytes to be changed"," *"," * Return: changed array with new value for n bytes"," */","char *_memset(char *s, char b, unsigned int n)","{","\tint i = 0;","","\tfor (; n > 0; i++)","\t{","\t\ts[i] = b;","\t\tn--;","\t}","\treturn (s);","}"],"stylingDirectives":[[{"start":0,"end":8,"cssClass":"pl-k"},{"start":9,"end":17,"cssClass":"pl-s"}],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":57,"cssClass":"pl-c"}],[{"start":0,"end":46,"cssClass":"pl-c"}],[{"start":0,"end":24,"cssClass":"pl-c"}],[{"start":0,"end":36,"cssClass":"pl-c"}],[{"start":0,"end":2,"cssClass":"pl-c"}],[{"start":0,"end":51,"cssClass":"pl-c"}],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":4,"cssClass":"pl-smi"},{"start":5,"end":6,"cssClass":"pl-c1"},{"start":6,"end":13,"cssClass":"pl-en"},{"start":14,"end":18,"cssClass":"pl-smi"},{"start":19,"end":20,"cssClass":"pl-c1"},{"start":20,"end":21,"cssClass":"pl-s1"},{"start":23,"end":27,"cssClass":"pl-smi"},{"start":28,"end":29,"cssClass":"pl-s1"},{"start":31,"end":43,"cssClass":"pl-smi"},{"start":40,"end":43,"cssClass":"pl-smi"},{"start":44,"end":45,"cssClass":"pl-s1"}],[],[{"start":1,"end":4,"cssClass":"pl-smi"},{"start":5,"end":6,"cssClass":"pl-s1"},{"start":7,"end":8,"cssClass":"pl-c1"},{"start":9,"end":10,"cssClass":"pl-c1"}],[],[{"start":1,"end":4,"cssClass":"pl-k"},{"start":8,"end":9,"cssClass":"pl-s1"},{"start":10,"end":11,"cssClass":"pl-c1"},{"start":12,"end":13,"cssClass":"pl-c1"},{"start":15,"end":16,"cssClass":"pl-s1"},{"start":16,"end":18,"cssClass":"pl-c1"}],[],[{"start":2,"end":3,"cssClass":"pl-s1"},{"start":4,"end":5,"cssClass":"pl-s1"},{"start":7,"end":8,"cssClass":"pl-c1"},{"start":9,"end":10,"cssClass":"pl-s1"}],[{"start":2,"end":3,"cssClass":"pl-s1"},{"start":3,"end":5,"cssClass":"pl-c1"}],[],[{"start":1,"end":7,"cssClass":"pl-k"},{"start":9,"end":10,"cssClass":"pl-s1"}],[]],"csv":null,"csvError":null,"dependabotInfo":{"showConfigurationBanner":false,"configFilePath":null,"networkDependabotPath":"/Nzioka6350/alx-low_level_programming/network/updates","dismissConfigurationNoticePath":"/settings/dismiss-notice/dependabot_configuration_notice","configurationNoticeDismissed":null,"repoAlertsPath":"/Nzioka6350/alx-low_level_programming/security/dependabot","repoSecurityAndAnalysisPath":"/Nzioka6350/alx-low_level_programming/settings/security_analysis","repoOwnerIsOrg":false,"currentUserCanAdminRepo":false},"displayName":"0-memset.c","displayUrl":"https://github.com/Nzioka6350/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/0-memset.c?raw=true","headerInfo":{"blobSize":"370 Bytes","deleteInfo":{"deleteTooltip":"You must be signed in to make or propose changes"},"editInfo":{"editTooltip":"You must be signed in to make or propose changes"},"ghDesktopPath":"https://desktop.github.com","gitLfsPath":null,"onBranch":true,"shortPath":"35786be","siteNavLoginPath":"/login?return_to=https%3A%2F%2Fgithub.com%2FNzioka6350%2Falx-low_level_programming%2Fblob%2Fmaster%2F0x07-pointers_arrays_strings%2F0-memset.c","isCSV":false,"isRichtext":false,"toc":null,"lineInfo":{"truncatedLoc":"20","truncatedSloc":"19"},"mode":"file"},"image":false,"isCodeownersFile":null,"isPlain":false,"isValidLegacyIssueTemplate":false,"issueTemplateHelpUrl":"https://docs.github.com/articles/about-issue-and-pull-request-templates","issueTemplate":null,"discussionTemplate":null,"language":"C","languageID":41,"large":false,"loggedIn":false,"newDiscussionPath":"/Nzioka6350/alx-low_level_programming/discussions/new","newIssuePath":"/Nzioka6350/alx-low_level_programming/issues/new","planSupportInfo":{"repoIsFork":null,"repoOwnedByCurrentUser":null,"requestFullPath":"/Nzioka6350/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/0-memset.c","showFreeOrgGatedFeatureMessage":null,"showPlanSupportBanner":null,"upgradeDataAttributes":null,"upgradePath":null},"publishBannersInfo":{"dismissActionNoticePath":"/settings/dismiss-notice/publish_action_from_dockerfile","dismissStackNoticePath":"/settings/dismiss-notice/publish_stack_from_file","releasePath":"/Nzioka6350/alx-low_level_programming/releases/new?marketplace=true","showPublishActionBanner":false,"showPublishStackBanner":false},"renderImageOrRaw":false,"richText":null,"renderedFileInfo":null,"shortPath":null,"tabSize":8,"topBannersInfo":{"overridingGlobalFundingFile":false,"globalPreferredFundingPath":null,"repoOwner":"Nzioka6350","repoName":"alx-low_level_programming","showInvalidCitationWarning":false,"citationHelpUrl":"https://docs.github.com/en/github/creating-cloning-and-archiving-repositories/creating-a-repository-on-github/about-citation-files","showDependabotConfigurationBanner":false,"actionsOnboardingTip":null},"truncated":false,"viewable":true,"workflowRedirectUrl":null,"symbols":{"timedOut":false,"notAnalyzed":false,"symbols":[{"name":"_memset","kind":"function","identStart":254,"identEnd":261,"extentStart":254,"extentEnd":294,"fullyQualifiedName":"_memset","identUtf16":{"start":{"lineNumber":9,"utf16Col":6},"end":{"lineNumber":9,"utf16Col":13}},"extentUtf16":{"start":{"lineNumber":9,"utf16Col":6},"end":{"lineNumber":9,"utf16Col":46}}}]}},"copilotInfo":null,"csrf_tokens":{"/Nzioka6350/alx-low_level_programming/branches":{"post":"V_7q3BP86rMmEt9A4qXk1BPscNPpC9YhD6a6vRD6KhPeAkpJgV-FEd6HKNVtTVvKFuW02zW4faxFK7_lbGxTew"},"/repos/preferences":{"post":"WiP_FNKcs30Oi2HXHHYV_-tp9sCcvQ6P6o1X0T9r-CeBGiNFJJwzsrlngpP5x31X4ZXH6azdaQBlgJHX4fTGsw"}}},"title":"alx-low_level_programming/0x07-pointers_arrays_strings/0-memset.c at master · Nzioka6350/alx-low_level_programming"}