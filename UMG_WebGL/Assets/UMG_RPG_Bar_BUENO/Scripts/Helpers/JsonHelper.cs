using System;
using System.Collections;
using System.Collections.Generic;
using Newtonsoft.Json;

public static class JsonListDeserialize
{
    public static List<T> Deserialize<T>(this string SerializedJSONString)
    {
        var stuff = JsonConvert.DeserializeObject<List<T>>(SerializedJSONString);
        return stuff;
    }
}

public class PrimaryAssetContract
{
    public string address { get; set; }
    public string asset_contract_type { get; set; }
    public DateTime created_date { get; set; }
    public string name { get; set; }
    public string nft_version { get; set; }
    public object opensea_version { get; set; }
    public int owner { get; set; }
    public string schema_name { get; set; }
    public string symbol { get; set; }
    public string total_supply { get; set; }
    public object description { get; set; }
    public object external_link { get; set; }
    public object image_url { get; set; }
    public bool default_to_fiat { get; set; }
    public int dev_buyer_fee_basis_points { get; set; }
    public int dev_seller_fee_basis_points { get; set; }
    public bool only_proxied_transfers { get; set; }
    public int opensea_buyer_fee_basis_points { get; set; }
    public int opensea_seller_fee_basis_points { get; set; }
    public int buyer_fee_basis_points { get; set; }
    public int seller_fee_basis_points { get; set; }
    public object payout_address { get; set; }
}

public class Traits
{
}

public class Stats
{
    public double one_day_volume { get; set; }
    public double one_day_change { get; set; }
    public double one_day_sales { get; set; }
    public double one_day_average_price { get; set; }
    public double seven_day_volume { get; set; }
    public double seven_day_change { get; set; }
    public double seven_day_sales { get; set; }
    public double seven_day_average_price { get; set; }
    public double thirty_day_volume { get; set; }
    public double thirty_day_change { get; set; }
    public double thirty_day_sales { get; set; }
    public double thirty_day_average_price { get; set; }
    public double total_volume { get; set; }
    public double total_sales { get; set; }
    public double total_supply { get; set; }
    public double count { get; set; }
    public int num_owners { get; set; }
    public double average_price { get; set; }
    public int num_reports { get; set; }
    public double market_cap { get; set; }
    public int floor_price { get; set; }
}

public class DisplayData
{
    public string card_display_style { get; set; }
    public List<object> images { get; set; }
}

public class Root
{
    public List<PrimaryAssetContract> primary_asset_contracts { get; set; }
    public Traits traits { get; set; }
    public Stats stats { get; set; }
    public object banner_image_url { get; set; }
    public object chat_url { get; set; }
    public DateTime created_date { get; set; }
    public bool default_to_fiat { get; set; }
    public object description { get; set; }
    public string dev_buyer_fee_basis_points { get; set; }
    public string dev_seller_fee_basis_points { get; set; }
    public object discord_url { get; set; }
    public DisplayData display_data { get; set; }
    public object external_url { get; set; }
    public bool featured { get; set; }
    public object featured_image_url { get; set; }
    public bool hidden { get; set; }
    public string safelist_request_status { get; set; }
    public object image_url { get; set; }
    public bool is_subject_to_whitelist { get; set; }
    public object large_image_url { get; set; }
    public object medium_username { get; set; }
    public string name { get; set; }
    public bool only_proxied_transfers { get; set; }
    public string opensea_buyer_fee_basis_points { get; set; }
    public string opensea_seller_fee_basis_points { get; set; }
    public object payout_address { get; set; }
    public bool require_email { get; set; }
    public object short_description { get; set; }
    public string slug { get; set; }
    public object telegram_url { get; set; }
    public object twitter_username { get; set; }
    public object instagram_username { get; set; }
    public object wiki_url { get; set; }
    public bool is_nsfw { get; set; }
    public int owned_asset_count { get; set; }
}
