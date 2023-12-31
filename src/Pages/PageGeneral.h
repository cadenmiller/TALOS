#pragma once

#include "FlashStrings.h"
#include "Page.h"

namespace ts {

class PageGeneral : public Page {
public:
    virtual void render(Render& render) override;

    void setSeverity(Strings::Select index);
    void setPrimary(Strings::Select index);
    void setSecondary(Strings::Select index);

private:
    Strings::Select _severity;
    char _primary[TS_FLASH_STRINGS_MAX_LENGTH+1];
    char _secondary[TS_FLASH_STRINGS_MAX_LENGTH+1];
};

} /* namespace ts */
