// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.
#include "pch.h"
#include "AdaptiveChoiceInput.h"
#include <windows.foundation.collections.h>

using namespace Microsoft::WRL;
using namespace Microsoft::WRL::Wrappers;
using namespace ABI::AdaptiveCards::ObjectModel::WinUI3;
using namespace ABI::Windows::Foundation::Collections;

namespace winrt::AdaptiveCards::ObjectModel::WinUI3::implementation
{
    AdaptiveChoiceInput::AdaptiveChoiceInput(const std::shared_ptr<::AdaptiveCards::ChoiceInput>& sharedChoiceInput) :
        m_sharedChoiceInput(sharedChoiceInput)
    {
    }

    hstring AdaptiveChoiceInput::Title()
    {
        return UTF8ToHString(m_sharedChoiceInput->GetTitle());
    }

    void AdaptiveChoiceInput::Title(hstring const& title)
    {
        m_sharedChoiceInput->SetTitle(HStringToUTF8(title));
    }

    hstring AdaptiveChoiceInput::Value()
    {
        return UTF8ToHString(m_sharedChoiceInput->GetValue());
    }

    void AdaptiveChoiceInput::Value(hstring const& value)
    {
        m_sharedChoiceInput->SetTitle(HStringToUTF8(value));
    }

    std::shared_ptr<::AdaptiveCards::ChoiceInput> AdaptiveChoiceInput::GetSharedModel()
    {
        return m_sharedChoiceInput;
    }
}
