// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/iqs20241111.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_IQS20241111;

Alibabacloud_IQS20241111::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("iqs"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_IQS20241111::Client::getEndpoint(shared_ptr<string> productId,
                                                     shared_ptr<string> regionId,
                                                     shared_ptr<string> endpointRule,
                                                     shared_ptr<string> network,
                                                     shared_ptr<string> suffix,
                                                     shared_ptr<map<string, string>> endpointMap,
                                                     shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

AiSearchResponse Alibabacloud_IQS20241111::Client::aiSearchWithOptions(shared_ptr<AiSearchRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->industry)) {
    query->insert(pair<string, string>("industry", *request->industry));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    query->insert(pair<string, string>("query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("sessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeRange)) {
    query->insert(pair<string, string>("timeRange", *request->timeRange));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AiSearch"))},
    {"version", boost::any(string("2024-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/linked-retrieval/linked-retrieval-entry/v3/linkedRetrieval/commands/aiSearch"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AiSearchResponse(callApi(params, req, runtime));
}

AiSearchResponse Alibabacloud_IQS20241111::Client::aiSearch(shared_ptr<AiSearchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return aiSearchWithOptions(request, headers, runtime);
}

GenericAdvancedSearchResponse Alibabacloud_IQS20241111::Client::genericAdvancedSearchWithOptions(shared_ptr<GenericAdvancedSearchRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->industry)) {
    query->insert(pair<string, string>("industry", *request->industry));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    query->insert(pair<string, string>("query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("sessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeRange)) {
    query->insert(pair<string, string>("timeRange", *request->timeRange));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenericAdvancedSearch"))},
    {"version", boost::any(string("2024-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/linked-retrieval/linked-retrieval-entry/v2/linkedRetrieval/commands/genericAdvancedSearch"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenericAdvancedSearchResponse(callApi(params, req, runtime));
}

GenericAdvancedSearchResponse Alibabacloud_IQS20241111::Client::genericAdvancedSearch(shared_ptr<GenericAdvancedSearchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return genericAdvancedSearchWithOptions(request, headers, runtime);
}

GenericSearchResponse Alibabacloud_IQS20241111::Client::genericSearchWithOptions(shared_ptr<GenericSearchRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableRerank)) {
    query->insert(pair<string, bool>("enableRerank", *request->enableRerank));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->industry)) {
    query->insert(pair<string, string>("industry", *request->industry));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    query->insert(pair<string, string>("query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->returnMainText)) {
    query->insert(pair<string, bool>("returnMainText", *request->returnMainText));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->returnMarkdownText)) {
    query->insert(pair<string, bool>("returnMarkdownText", *request->returnMarkdownText));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->returnSummary)) {
    query->insert(pair<string, bool>("returnSummary", *request->returnSummary));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("sessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeRange)) {
    query->insert(pair<string, string>("timeRange", *request->timeRange));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenericSearch"))},
    {"version", boost::any(string("2024-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/linked-retrieval/linked-retrieval-entry/v2/linkedRetrieval/commands/genericSearch"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenericSearchResponse(callApi(params, req, runtime));
}

GenericSearchResponse Alibabacloud_IQS20241111::Client::genericSearch(shared_ptr<GenericSearchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return genericSearchWithOptions(request, headers, runtime);
}

GetIqsUsageResponse Alibabacloud_IQS20241111::Client::getIqsUsageWithOptions(shared_ptr<GetIqsUsageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    query->insert(pair<string, string>("endDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDate)) {
    query->insert(pair<string, string>("startDate", *request->startDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetIqsUsage"))},
    {"version", boost::any(string("2024-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/linked-retrieval/linked-retrieval-admin/v1/iqs/usage"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetIqsUsageResponse(callApi(params, req, runtime));
}

GetIqsUsageResponse Alibabacloud_IQS20241111::Client::getIqsUsage(shared_ptr<GetIqsUsageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getIqsUsageWithOptions(request, headers, runtime);
}

GlobalSearchResponse Alibabacloud_IQS20241111::Client::globalSearchWithOptions(shared_ptr<GlobalSearchRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    query->insert(pair<string, string>("query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeRange)) {
    query->insert(pair<string, string>("timeRange", *request->timeRange));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GlobalSearch"))},
    {"version", boost::any(string("2024-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/linked-retrieval/linked-retrieval-entry/v1/iqs/search/global"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GlobalSearchResponse(callApi(params, req, runtime));
}

GlobalSearchResponse Alibabacloud_IQS20241111::Client::globalSearch(shared_ptr<GlobalSearchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return globalSearchWithOptions(request, headers, runtime);
}

UnifiedSearchResponse Alibabacloud_IQS20241111::Client::unifiedSearchWithOptions(shared_ptr<UnifiedSearchRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnifiedSearch"))},
    {"version", boost::any(string("2024-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/linked-retrieval/linked-retrieval-entry/v1/iqs/search/unified"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnifiedSearchResponse(callApi(params, req, runtime));
}

UnifiedSearchResponse Alibabacloud_IQS20241111::Client::unifiedSearch(shared_ptr<UnifiedSearchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return unifiedSearchWithOptions(request, headers, runtime);
}

