// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.
#pragma once

#include "ColumnSet.h"
#include "AdaptiveColumnSetParser.g.h"

namespace winrt::AdaptiveCards::ObjectModel::Uwp::implementation
{
    struct AdaptiveColumnSetParser : AdaptiveColumnSetParserT<AdaptiveColumnSetParser>
    {
        AdaptiveColumnSetParser() = default;

        winrt::AdaptiveCards::ObjectModel::Uwp::IAdaptiveCardElement FromJson(
            winrt::Windows::Data::Json::JsonObject const& inputJson,
            winrt::AdaptiveCards::ObjectModel::Uwp::AdaptiveElementParserRegistration const& elementParsers,
            winrt::AdaptiveCards::ObjectModel::Uwp::AdaptiveActionParserRegistration const& actionParsers,
            winrt::Windows::Foundation::Collections::IVector<winrt::AdaptiveCards::ObjectModel::Uwp::AdaptiveWarning> const& warnings);
    };
}
namespace winrt::AdaptiveCards::ObjectModel::Uwp::factory_implementation
{
    struct AdaptiveColumnSetParser : AdaptiveColumnSetParserT<AdaptiveColumnSetParser, implementation::AdaptiveColumnSetParser>
    {
    };
}
